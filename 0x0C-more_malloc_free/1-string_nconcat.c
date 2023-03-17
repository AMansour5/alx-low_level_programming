#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, j, k, limit;

if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

if (n >= j)
{
ptr = malloc(sizeof(char) * (i + j + 1));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}

for (k = 0; k < i; k++)
ptr[k] = s1[k];

limit = j;
for (j = 0; j <= limit; k++, j++)
ptr[k] = s2[j];
}
else
{
ptr = malloc(sizeof(char) * (i + n + 1));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}

for (k = 0; k < i; k++)
ptr[k] = s1[k];

for (j = 0; j <= n; k++, j++)
ptr[k] = s2[j]; 
}
return (ptr);
}
