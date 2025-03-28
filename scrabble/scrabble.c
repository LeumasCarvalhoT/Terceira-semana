#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int pontos[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int pc_pontuação (string palavra);

int main (void)
{
  printf ("Digitem suas palavras.\n");

string palavra1 = get_string ("Jogador 1: ");
string palavra2 = get_string ("Jogador 2: ");

int pontuação1 = pc_pontuação(palavra1);
int pontuação2 = pc_pontuação(palavra2);


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

printf("Pontos totais do jogador 1%i\n", pontuação1);
printf("Pontos totais do jogador 2%i\n", pontuação2);
}


int pc_pontuação (string palavra)
{
  int pontuação = 0;

 int letras = strlen(palavra);
 for (int i = 0; i < letras; i++)
 {
  if (isupper(palavra[i]))
  {
    pontuação += pontos[palavra[i] - 'A'];
  }
  else if (islower(palavra[i]))
  {
    {
      pontuação += pontos[palavra[i] - 'a'];
    }
  }
 }
 return pontuação;
}
