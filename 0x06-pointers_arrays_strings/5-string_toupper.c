#include "main.h"
/**
 * string_toupper - coverts string to uppercase
 * @str: The string to be converted
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


