#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i,j;

    for (i=48; i<58; i++)
    {
        putchar(i);
    }
    for (j=97; j<103; j++)
    {
        putchar(j);
    }
    putchar('\n');
    return (0);
}
