#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int pontos[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main (void)
{
  printf ("Digitem suas palavras.\n");

string palavra1 = get_string ("Jogador 1: \n");
string palavra2 = get_string ("Jogador 2: \n");

int pontuação1 = pc_pontuação (palavra1);
int pontuação2 = pc_pontuação (palavra2);

if (pontuação1 > pontuação2)
{
  printf("Jogador 1 venceu!\n");
}
else if (pontuação1 < pontuação2)
{
  printf("Jogador 2 venceu!\n");
}
else if (pontuação1 == pontuação2)
{
  printf("Empate!\n");
}
}


int
