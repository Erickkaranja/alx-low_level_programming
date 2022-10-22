#include <stdio.h>
/**
 * main - prints numbers 1 - 100 followed by
 * a new line.For multiples of 3 print fizz
 * for multiples of 5 print buzz, for both
 * multiples of 3 and 5 print fizzbuzz.
 * Return: Always 0
 */
int main(void)
{
int i;

for (i = 1 ; i <= 100 ; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if(i % 3 == 0)
{
printf("Fizz");
}
else if(i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
}
printf("\n");
return (0);
}
