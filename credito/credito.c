#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    long cartao = get_long ("Número do seu cartão: ");


    int digitos = 0;
    while (cartao > 0)
    {
        cartao /= 10;
        cartao++;
    }
}
