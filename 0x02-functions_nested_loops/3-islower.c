#include "main.h"
/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
if (c >= 97 && c < 123)
{
return (1);
}
else if (c >= 65 && c < 90)
{
return (0);
}
else
{
return (1);
}
_putchar('\n');
}
