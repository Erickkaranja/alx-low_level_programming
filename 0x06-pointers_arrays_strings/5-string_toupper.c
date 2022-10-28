#include "main.h"
/**
 * _touppercase - coverts string to uppercase
 * Return: pointer to lower case string
 */
char *string_toupper(char *str)
{
int index = 0;

while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')

str[index] -= 32;
index++;
}
return (str);
}


