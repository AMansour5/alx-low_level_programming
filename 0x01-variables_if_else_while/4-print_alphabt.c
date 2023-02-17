#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char s[26] = "abcdfghijklmnoprstuvwxyz";
    int i;

    for (i = 0; i < 26; i++)
    {
        putchar(s[i]);
    }
    putchar('\n');
    return (0);
}
