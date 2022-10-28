#include "main.h"
/**
 * _touppercase - coverts string to uppercase
 * Return: pointer to lower case string
 */
char *string_toupper(char *)
{
int index;
char str;
char *ptr;
*ptr = &str;

for (index = 97 ; index <= 122 ; index++)
{
str[index] = index - 32;
}
}


