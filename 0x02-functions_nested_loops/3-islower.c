#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: The character to be checked
 *
 * Return: 1 is c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
