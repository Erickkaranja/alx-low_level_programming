#include<stdio.h>
/**
 *main - prints all possible combinations of two digits
 *
 *Return: always 0
 */
int main(void)
{
	int n;

	for (n = 1 ; n <= 9 ; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
