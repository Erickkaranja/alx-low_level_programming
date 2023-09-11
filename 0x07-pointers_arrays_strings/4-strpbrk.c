#include "main.h"
/**
*_strpbrk - checks for common bytes in s and accept
*@s: string to be checked
*@accept: The string to be checked
*Return: pointer to the common bytes checked
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0 ; accept[index] ; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
