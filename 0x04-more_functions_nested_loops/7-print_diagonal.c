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

for (length = 0 ; n > 0 && length < n ; length++)
{
for (space = 0 ; space < length ; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

if (n <= 0)
_putchar('\n');
}
