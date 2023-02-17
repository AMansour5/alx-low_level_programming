#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j, k;

    for (i = 48; i < 58; i++)
    {
        
        for (j = 49; j < 58; j++)
        {
            for (k=50; k < 58; k++)
            {

                if (j == i || j < i || k == j || k < j || k == i || k < i)
                {
                    continue;
                }
                else
                {
                    
                    putchar(i);
                    putchar(j);
                    putchar(k);
                    if (j != 56 || i != 55  || k != 57)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
