#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
int count, i, j;
char *str, sto;
for (count = 0; *(s + count) != '\0'; ++count);
str = s;
for (i = 0; i < (count - 1); i++)
{
for (j = i + 1; j > 0; j--)
{
sto = *(str + j);
*(str + j) = *(str + (j - 1));
*(str + (j - 1)) = sto;
}
}
}

