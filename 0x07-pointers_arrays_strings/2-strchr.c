#include "main.h"
/**
*_strchr - returns a pointer to first occurence of char
*@s: The string to be checked
*@c: The character to be checked
*Return: pointer to character checked
*/
char *_strchr(char *s, char c)
{
unsigned int index;

for (index = 0 ; s[index] <= '\0' ; index++)
if (s[index] == c)
{
return (s + index);
}
else
return ('\0');
}
