#include "main.h"
/**
 * print_triangle - prints triangles
 * Return: void
 */
void print_triangle(int size)
{
	int n;

	for (n = 1 ; n < size ; n++)
	{
		for (size = 1 ; size < n ; size++)
		{
			_putchar('#');

			if (size = n - 1)
				continue;
		}

	}
	_putchar('\n');
}
