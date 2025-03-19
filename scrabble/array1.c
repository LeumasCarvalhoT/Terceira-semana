#include <cs50.h>
#include <stdio.h>



float média (int n, int p[]);

int main(void)
{

int provas = get_int ("Quantas provas fez?: ");

int notas[provas];

 for (int i = 0; i < provas; i++)

    {
    notas[i] = get_int ("Nota: ");
    }

  printf ("Sua média é: %f\n", média (provas, notas));

   }

   float média (int n, int p[])
{
   int soma = 0;
   for (int k = 0; k < n; k++)
   {
      soma = soma + p[k];
   }

   return soma / (float) n;

}
