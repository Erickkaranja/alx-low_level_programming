#include "main.h"
/**
 * print_numbers - prints numbers fron 0 - 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 9 ; i++)
	{
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
	return (0);
}