#include "main.h"
/**
 * print_square - prints a square followed by a new line
 * @size: The size of the square.
 * Return: void
 */
void print_square(int size)
{
	int length;
	int width;

	for (length = 0 ; length < size ; length++)
	{
	for (width = 0 ; width < size ; width++)
	{
		_putchar('#');

		if (length == size - 1)
			continue;
		_putchar('\n');
	}
	}
	_putchar('\n');
}
