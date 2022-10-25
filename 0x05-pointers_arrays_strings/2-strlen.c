
#include "main.h"

/**
 * _strlen - prints the length of a strig literal
 * @s: The string of length print
 * Return: length
 */

int _strlen(char *s)
{
int length = 0;
while (*s++)
{
length++;
}
return (length);
}
