#include<stdio.h>
/**
 *main - prints the alphabet in lowercase
 *followed by new line, except q and e
 *Return: always 0
 */
int main(void)
{
	char la;

	for (la = 'a' ; la <= 'z' ; la++)
{
	if (la != 'e' && la != 'z')
		putchar(la);
}
	putchar('\n');
	return (0);
}
