#include "main.h"

/**
 * len - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int len(char *s)
{
if (*s == '\0')
return (0);
else 
return(1 + len(s + 1));
}
/**
 * comparison - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int comparison(char *s, int n1, int n2)
{
if(*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparison(s, n1 + 1, n2 - 1));
}
return (0);
}
/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparison(s, 0, len(s) - 1));
}
