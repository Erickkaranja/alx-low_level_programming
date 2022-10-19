#include "main.h"
/**
 * main - program that prints _putchar followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
	_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
