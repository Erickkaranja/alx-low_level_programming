#include "main.h"

/**
*_strstr - checks for common substrings between two strings
*@haystack: The string to be searched
*@needle: The substring to be located
*Return: if the substring is located a pointer to the beginning of
*located substring.if substring no located return null.
*/

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*needle)
	{
		for (index = 0 ; haystack[index] ; index++)
		{
			if (*needle == haystack[index])
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
