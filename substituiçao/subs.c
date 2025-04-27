#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf ("Use ./subs key\n");
    }

    string key = argv[1];
    for (int i = 0; i < strlen(key); i++)
    {
        if(!isalpha(key[i]))
        {
            printf("Use ./subs key\n");
            return 1;
        }
    }

    if(strlen(key) != 26)
    {
        printf("key precisa de pelo menos 26 caracteres.\n");
        return 1;
    }

    
    for(int j = 0; j < strlen(key); j++)
    {
        for(int f = j + 1; f < strlen(key); f++)
        {
            if(toupper(key[j]) == toupper(key[f]))
            {
                printf("Use: ./subs key\n");
                return 1;
            }

        }
    }

    string escritura = get_string ("Digite: ");

    for (int i = 0; i < strlen(key); i++)
    {
        if(islower(key[i]))
        {
            key[i] = key[i] - 32;
        }
    }

    printf("Texto cifrado: ");


    for (int i = 0; i < strlen(escritura); i++)
    {
        if(isupper(escritura[i]))
        {
            int letra = escritura[i] - 'A';
            printf("%c", key[letra]);
        }
        else if(islower(escritura[i]))
        {
            int letra = escritura[i] - 'a';
            printf("%c", key[letra] + 32);
        }
        else
        {
            printf("%c", escritura[i]);
        }
    }
    printf("\n");
}
