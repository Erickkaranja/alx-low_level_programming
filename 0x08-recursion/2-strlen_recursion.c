#include "main.h"

/**
* _strlen_recursion - calculates the leng of a string recursively.
* @s: The string of check.
* Return:The length of the string.
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
	i++;
	i += _strlen_recursion(s + 1);
	}
	return (i);
}
