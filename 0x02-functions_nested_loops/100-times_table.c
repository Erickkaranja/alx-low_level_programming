#include <stdio.h>

/**
 * print_times_table - prints time table up to inputs
 *
 * Description: writes times table up to an input,
 * not exceeding 15
 *
 *@n: size of the times table
 *
 * Return: Nothing!
 */
void print_times_table(int n)
{
	int y, x, prod;

	if (n <= 15 && n >= 0)
	{
		for (y = 0 ; y <= n ; y++)
		{
		for (x = 0 ; x <= n ; n++)
		{
			if (x != 0)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (prod < 10 && x != 0)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar((prod % 10) + '0');
			}
			else if (prod >= 100 && prod < 100)
			{
			_putchar(' ');
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			}
			else if (prod >= 100 && x != 0)
			{
			_putchar((prod / 100) + '0');
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			}
			else
				_putchar((prod % 10) + '0');
		}
		_putchar('\n');
		}
	}
}
