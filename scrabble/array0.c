#include <cs50.h>
#include <stdio.h>

const int total = 3;

int main(void)
{
int notas[total];

 for (int i = 0; i < total; i++)

    {
    notas[i] = get_int ("Nota: ");
    }

  printf ("Sua média é: %f\n",  (notas[0] + notas[1] + notas[2]) / total);

}
