#include "main.h"

/**
 * _strcpy - copies a string pointed by @src including
 * the null terminating byte
 * @src: switching character
 * @dest: store buffer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int index = 0;
int length = 0;

while (*(src + length))
{
length++;
}
for (; index < length ; index++)
{
*(dest + 1) = *(src + 1);
}
*(dest + length) = '\0';
return (dest);
}
