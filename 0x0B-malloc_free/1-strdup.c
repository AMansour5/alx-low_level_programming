#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
char *cr;
unsigned int i, j;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++);

cr = (char *)malloc(sizeof(char) * (i + 1));

for (j = 0; j < i; j++)
cr[j] = str[j];

if (cr == NULL)
return (NULL);

return (cr);
}
