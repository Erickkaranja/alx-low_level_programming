#include "main.h"
/**
 * _strncat - concatenates two strings and adds an extra bit
 * to the dest.
 * @dest: destination string
 * @src: source string
 * @n: thenumber of bytes to be appended to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int dest_length = 0;

while (dest[index++])
dest_length++;

for (index = 0 ; src[index] && index < n ; index++)
{
dest[dest_length++] = src[index];
}
return (dest);
}
