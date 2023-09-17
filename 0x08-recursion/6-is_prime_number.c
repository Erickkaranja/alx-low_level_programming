#include "main.h"

/**
* is_divisible - checks the divisibility of a number.
* @num: The number to be checked.
* @div: the divisor.
* Return: If the number is divisible - 0.else - 1.
*/
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
/**
* is_prime_number - finds if a given number n is a prime number.
* @n: The number to be checked.
* Return: returns 1 if input is a prime number otherwise 0.
*/

int is_prime_number(int n)
{
	int div = 2;

	if (n < 1 || n == 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);
	return (is_divisible(n, div));
}
