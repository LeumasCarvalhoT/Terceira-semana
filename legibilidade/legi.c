#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string escrita = get_string ("Escreva seu texto: ")

    int letras = 0;
    int palavras = 1;
    int sentenças = 0;

    int n = 0;

    while (escrita[n] != '\0')
    {
        int caracteres = tolower(escrita[n]);
        if(caracteres == 32)
        {
        palavras++;
        }
        else if(caracteres >= 'a' && caracteres <= 'z')
        {
            letras++;
        }
        else if (caracteres == '!' || caracteres == '?' || caracteres == '.')
        {
            sentenças++;
        }
        n++;
    }

float = L ((float) letras / palavras) * 100;
float = S ((float) sentenças / palavras) * 100;
    indice = 0.0588 * L - 0.296 * S - 15.8

   if(indice >= 16)
   {
    printf("Grade %i\n", indice);
   }
   else if(indice < 1)
   {
    printf("Grade 16+ %i\n", indice);
   }
 }
