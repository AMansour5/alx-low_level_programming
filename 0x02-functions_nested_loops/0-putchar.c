#include <stdio.h>
/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main()
{
char s[8] = "_putchar";
int i;
for (i = 0; i < 8; i++)
{
_putchar(s[i]);
}
_putchar('\n');
return (0);
}
