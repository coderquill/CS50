#include<stdio.h>
#include<cs50.h>

int main()
{
    int n, i, j, k;
    do
    {
        printf("height:");
        n = get_int();
    }
    while (!(n > -1 && n < 24));


    for (i = 0; i < n; i++)
    {
        for (k = n - i - 1; k > 0; k--)
        {
            printf(" ");
        }
        for (j = i + 1; j > 0; j--)
        {
            printf("#");
        }

        printf("  ");

        for (j = i + 1; j > 0; j--)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}