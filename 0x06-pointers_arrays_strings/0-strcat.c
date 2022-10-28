#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string
 * @scr: the sourse string
 * Return: pointer resulting dest
 */
char *_strcat(char *dest, char *src)
{
int index = 0;
int dest_length = 0;

while (dest[index++])
dest_length++;

for (index = 0 ; src[index] ; index++)
{
dest[dest_length++] = src[index];
}
return (dest);
}
