#include <cs50.h>
#include <stdio.h>

//só pra treinamento

int main(void)
{
  int soma[2]; //indica o quantas variaveis tem
   soma[0] = get_int ("x = ");
   soma[1] = get_int ("y = ");

int  z =soma[0] + soma[1]; //obrigatório colocar as chaves!!!
  printf ("resultado: %f\n", z / 2.0);

}
