#include "main.h"

int _strlen(char *s)
{
int count; 
for (count = 0; *(s + count) != '\0'; ++count);
return (count);
}

