#include "main.h"

/**
* factorial - function that finds factorial of a given integer.
* @n: The nuber.
* Return: If successful the factorial value.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
