#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned int a;
    unsigned char c;
    printf ("Ââåäèòå ÷èñëî:");
    scanf("%d",&a);
    unsigned char mass[sizeof(int)*8];
    for (int i = 3,j = 31; i >= 0;i--)
    {

            c = (a << i*8) >> 24;
            for (int p = 0;p < sizeof(char)*8;p++,j--)
            {
            mass[j] = c %2;
            c/=2;
            }


    }
    printf ("×èñëî â äâîè÷íîì ïðåäñòàâëåíèè:");
    for (int i = 0;i < 32;i++)
    {
        printf ("%d",mass[i]);
    }
    return 0;
}
