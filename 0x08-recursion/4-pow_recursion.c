#include "main.h"

/**
* _pow_recursion - find power of a given number recursively.
* @x: The base integer.
* @y: The power integer.
* Return: evaluation of the power value.
*/

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	result *= _pow_recursion(x, y - 1);

	return (result);
}
