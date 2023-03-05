#include "main.h"

/**
* find_sqrt - finds the natural square root of the inputted number.
* @num: The number to find square root of.
* @root: The root to be tested.
* Return: Root to a number.
*/

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
* _sqrt_recursion - finds square root of a number reculsively.
* @n: The number.
* @Return: Returns the square root of n.
*/

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
