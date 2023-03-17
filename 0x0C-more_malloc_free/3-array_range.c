#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
int *ptr;
unsigned int i;

if (min > max)
return (NULL);

ptr = malloc((max - min + 1) * sizeof(int));

if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
ptr[i] = min;

return (ptr);
}
