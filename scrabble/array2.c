#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
    string p = get_string ("Digite sua palavra: ");
    printf ("Resultado: ");

    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (islower(p[i]))
        {
            printf ("%c", toupper(p[i]));
        }
        else
        {
            printf("%c", (p[i]));
        }
    }
    printf("\n");
}
