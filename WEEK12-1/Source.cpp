#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int a;
    scanf_s("%d", &a);
    if (a <= 0)
    {
        printf("Error");
        return 0;
    }
    char bb[100];
    int longb;
    int c[10000], longg = 0, k = 0, t = 0, p = 0, max = -214000000, min = 214000000;

    int idx = 0;


    for (int i = 0; i < a; i++)
    {
        scanf_s("%d", &c[i]);
        if (c[i] > max)
        {
            max = c[i];
        }
        if (c[i] < min)
        {
            min = c[i];
        }
        if (c[i] >= 0)
        {
            longg += c[i];
        }
        if (c[i] < 0)
        {
            longg += c[i] * -1;
            k += 1;
        }
    }
    if (k == 0)
    {
        t = max;
    }
    else
    {
        t = max + (min * -1) - 1;
        p -= 1;
    }
    int jo = max;
    int jol = min * -1;
    int w;
    int r;
    for (int i = 0; i < jo; i++)
    {
        w = 0;
        for (int j = 0; j < a; j++)
        {
            if (jo - i == 1)
            {
                for (int i = 0; i < longg; i++)
                {
                    printf("*");
                    printf(" ");
                }
                break;
            }
            if (jo - i <= c[j])
            {
                r = 0;
                for (int y = 0; y < j; y++)
                {
                    if (c[y] < 0)
                    {
                        r += (c[y] * -1);
                    }
                    else
                    {
                        r += c[y];
                    }
                }
                for (int y = 0; y < (((r * 2) + ((jo - i) - 1)) - w); y++)
                {
                    printf(" ");
                }
                w += (((r * 2) + ((jo - i) - 1)) - w);
                for (int q = 0; q < 1 + (c[j] - (jo - i)); q++)
                {
                    printf("*");
                    printf(" ");
                }
                w += (1 + (c[j] - (jo - i))) * 2;
            }
        }
        printf("\n");
    }
    int sp = 0;
    if (p == -1)
    {
        for (int jy = 0; jy < a; jy++)
        {
            if (c[jy] <= 0)
            {
                sp += 1;
            }
        }
        if (sp == a)
        {
            for (int jkk = 0; jkk < longg; jkk++)
            {
                printf("*");
                printf(" ");
            }
            printf("\n");
        }
        for (int m = 0; m < a; m++)
        {
            c[m] *= -1;
        }
        for (int i = 0; i < jol; i++)
        {
            w = 0;
            for (int j = 0; j < a; j++)
            {
                if (2 + i <= c[j])
                {
                    r = 0;
                    for (int y = 0; y < j; y++)
                    {
                        if (c[y] < 0)
                        {
                            r += (c[y] * -1);
                        }
                        else
                        {
                            r += c[y];
                        }
                    }
                    for (int y = 0; y < ((r * 2) + (1 + i)) - w; y++)
                    {
                        printf(" ");
                    }
                    w += ((r * 2) + (1 + i)) - w;
                    for (int q = 0; q < c[j] - (1 + i); q++)
                    {
                        printf("*");
                        printf(" ");
                    }
                    w += (c[j] - (1 + i)) * 2;
                }
            }
            printf("\n");
        }
    }


    return 0;
}
