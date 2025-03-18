#include <cs50.h>
#include <stdio.h>

const int total = 3.0;

int main(void)
{
int notas[total];

int i = 0;

 for (i < total; i++)
  {
    notas[i] = get_int ("Nota: ");
  }

  printf ("Sua média é: %i\n", i / total);

}
