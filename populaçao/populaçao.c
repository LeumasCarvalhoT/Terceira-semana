#include <cs50.h>
#include <math.h>
#include <stdio.h>


int anos(int populaçao_Atual, int populaçao_Final);

int main (void)
{
    

    int populaçao_Atual;
    do
    {
        populaçao_Atual = get_int ("Digite sua população atual de ilhamas:");
    } while (populaçao_Atual < 9);
printf("\n");

    int populaçao_Final;
    do
    {
        populaçao_Final = get_int ("Agora sua população final de:");

    } while (populaçao_Final <= populaçao_Atual);
printf("\n");

int tempo = anos(populaçao_Atual,populaçao_Final);

}


int anos (int populaçao_Atual, int populaçao_Final)
{
int anos_precisos = 0;
if (populaçao_Atual < populaçao_Final)
{
   int num_p = populaçao_Atual + ((populaçao_Atual / 3) - (populaçao_Atual / 4));
   anos_precisos++;
}
printf("Anos necessários para o aumento:%i \n",anos_precisos);
return anos_precisos;
}
