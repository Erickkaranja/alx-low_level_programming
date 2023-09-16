#include "main.h"

/**
*_strchr - returns a pointer to first occurence of char
*@s: The string to be checked
*@c: The character to be checked
*Return: pointer to character checked
*/
char *_strchr(char *s, char c)
{
	while (s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
