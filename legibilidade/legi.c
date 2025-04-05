#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string escrita = get_string ("Escreva seu texto: ")

    int letras = 0;
    int palavras = 0;
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
    }
 }
