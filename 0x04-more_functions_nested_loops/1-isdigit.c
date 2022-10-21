#include "main.h"
/**
 * _is digit - returns if a given char is a digit
 * @c: the char of check
 * Return: 1 if c is adigit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
		return (0);
}
