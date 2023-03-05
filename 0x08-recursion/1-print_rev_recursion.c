#include "main.h"

/**
* _print_rev_recursion - prints reverse of a string recursively.
* @s: The string of print.
*
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
