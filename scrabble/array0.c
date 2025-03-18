#include <cs50.h>
#include <stdio.h>

const int total = 3.0;

int main(void)
{
int notas[total];

int i = 0;

 for ( i; i < total; i++);
  {
    notas[i] = get_int ("Nota: ");
  }

  int x = notas[i];

  printf ("Sua média é: %f\n", x / total);

}
