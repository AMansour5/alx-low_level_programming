#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, j;

    for (i = 48; i < 58; i++)
    {
        
        for (j = 49; j < 58; j++)
        {
            
            if (j == i || j < i)
            {
                continue;
            }
            else
            {
                putchar(i);
                putchar(j);
                if (j != 57 || i != 56 )
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
