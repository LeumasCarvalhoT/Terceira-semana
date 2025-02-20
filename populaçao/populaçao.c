#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main (void)
{

    int populaçao_Atual;
    do
    {
        populaçao_Atual = get_int ("Digite sua população atual de ilhamas:");
       printf("\n");
    } while (populaçao_Atual < 9)

    int populaçao_Final = get_int ("Agora sua população final:");


}
