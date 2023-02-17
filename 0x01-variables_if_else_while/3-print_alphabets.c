#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char s[26] = "abcdefghijklmnopqrstuvwxyz";
    char c[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    
    for (i = 0; i < 26; i++)
    {
        putchar(s[i]);
    }
    for (i = 0; i < 26; i++)
    {
        putchar(c[i]);
    }
    putchar('\n');
    return (0);
}
