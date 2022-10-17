#include<stdio.h>
/**
 *main - prints all possible combinations of two digits
 *
 *Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar((n);

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
