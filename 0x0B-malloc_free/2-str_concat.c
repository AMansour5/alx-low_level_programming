#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
char *cr;
unsigned int i, j, k,l;

if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";

for (i = 0; s1[i] != '\0'; i++);
for (j = 0; s2[j] != '\0'; j++);

cr = malloc(sizeof(char) * (i + j + 1));

for (k = 0; k < i; k++)
cr[k] = s1[k];

for (l = 0; l < j; l++)
cr[l+k] = s2[l];

if (cr == NULL)
{
free (cr);
return (NULL);
}

return (cr);
}
