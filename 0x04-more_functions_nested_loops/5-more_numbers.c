#include "main.h"
/**
 * more_numbers - prints 10 times number 0 - 14
 * return: void
 */
void more_numbers(void)
{
	int i;
	int n;
	n = 0;

	while (n <= 9)
	{
	for (i = 0 ; i <= 14 ; i++)
	{
		_putchar((i % 10) + '0');
		_putchar('\n');
	
	}
	i++;
	}
	_putchar('\n');
}
