#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_strings - prints strings followed by new line.
*@separator: string to be printed between strings.
*@n: The number of strings to be passed to the function.
*@...: a variable number of strings to be printed.
*
*Description: If separator is null its not printed,
*	if one of the string is null, nil is printed instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int index;
char *str;

va_start(strings, n);

for (index = 0 ; index < n ; index++)
{
str = va_arg(strings, char *)

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (index != (n - 1) && separator != NULL)
printf("%s", sepatator);
}
printf("\n");

va_end(strings);
}
