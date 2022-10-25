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
while (src[index])
{
dest[index] = src[index];
index++;
}
return (dest);
}
