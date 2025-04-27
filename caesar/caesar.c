#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
if (argc != 2)
  {
    printf("Use: ./caesar key\n");
  }
     string key = argv[1];

     for (int i = 0; i <strlen (argv[1]); i++)
     {
        if(!isdigit(argv[1][i]))
        {
            printf("Use: ./caesar key\n");
        }

     }

     string textinho = get_string ("Escreva: ");

     int tecla = atoi(key);
     printf("Texto cifrado: ");

     for(int i = 0; i < strlen(textinho); i++)

     if(tolower (textinho[i]))
     {
            printf("%c", (((textinho[i] - 'a') + tecla) %26) +'a');
     }

     else
     {
        printf("%c", textinho[i]);
     }
     printf("\n");

}

