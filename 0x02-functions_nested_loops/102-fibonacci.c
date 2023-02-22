#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long int n1 = 1, n2 = 2, f;
printf("%ld, %ld, ", n1, n2);
for (i = 2; i < 50; i++)
{   
f = n1 + n2;
n1 = n2;
n2 = f;
if (i != 49)
{
printf("%ld, ", f);
}        
else
{
printf("%ld", f);
}
}
printf("\n");
return (0);
}
