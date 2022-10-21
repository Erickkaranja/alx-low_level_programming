#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0
 */

int main(void)
{
long int n, fl;
n = 612852475143;

for (fl = 2 ; fl <= n ; fl++)
{
if (n % fl == 0)
{
n /= fl;
fl--;
}
}
printf("%ld\n", fl);
return (0);
}
