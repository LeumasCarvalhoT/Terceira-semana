#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string escrita = get_string ("Escreva seu texto: ");
printf ("\n");

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
printf("%i\n", caracteres);
printf("Quantidade de letras: %i\n", letras);
printf("Quantidade de palavras: %i\n", palavras);
printf("Quantidade de sentenças: %i\n", sentenças);

float L =((float) letras / palavras) * 100;
float S = ((float) sentenças / palavras) * 100;

    int indice = 0.0588 * L - 0.296 * S - 15.8;

   if(indice >= 16)
   {
    printf("Texto de 16º+ grau.\n");
   }
   else if(indice < 1)
   {
    printf("Antes do 1º grau.\n");
   }
   else
   {
    printf("Testo de %iº grau.\n", indice);
   }
 }
