#include <cs50.h>
#include <stdio.h>

//só pra treinamento

int main(void)
{
  int soma[2]; //indica o quantas variaveis tem
   int um[0] = get_int ("x = ");
   int dois[1] = get_int ("y = ");

int  z =um[0] + dois[1]; //obrigatório colocar as chaves!!!
  printf ("resultado: %f\n", z / 2.0);

}
