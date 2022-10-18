#include "main.h"
/**
 * void - prints the alphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char al;
	int i;

	while (i <=9 )
	{
		for (al = 'a' ; al <= 'z' ; al++)
			_putchar(al);
	}
	_putchar('\n');

	i++;
}
