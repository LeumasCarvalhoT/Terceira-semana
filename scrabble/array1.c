#include <cs50.h>
#include <stdio.h>



int main(void)
{
   int provas = get_int ("Quantas provas você fez?: ");

int notas[provas];

 for (int i = 0; i < provas; i++)

    {
    notas[i] = get_int ("Nota: ");
    }

  printf ("Sua média é: %f\n",  (notas[0] + notas[1] + notas[2]) / (float) provas);

}
