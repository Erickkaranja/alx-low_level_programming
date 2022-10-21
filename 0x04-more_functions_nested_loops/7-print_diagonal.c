#include "main.h"
/**
 * print_diagonal - prints diagonally character
 * @n: Number of diagonal lines to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int length;
	int space;

if (n > 0)
	{
	for (length = 0 ; length < space ; length++)
	{
		for (space = 0 ; space < length ; space++)
			_putchar(' ');
		_putchar('\\');

		if (length == n - 1)
			continue;

		_putchar('\n');
	}
	}

	_putchar('\n');

}
