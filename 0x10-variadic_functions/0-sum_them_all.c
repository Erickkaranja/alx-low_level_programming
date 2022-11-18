#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - prints the sum of the passed arguements
*@n: the number of parameters passed to the function.
*@...: Variable number of parameters to be calculated sum of.
*Return: if n == 0 - 0
*/

int sum_them_all(const unsigned int n, ...)
{

va_list list;
unsigned int i, sum = 0;

va_start(list, n);
if (n == 0)
{
return (0);
}
for (i = 0 ; i < n ; i++)

sum += va_arg(list, int);

va_end(list);

return (sum);
}
