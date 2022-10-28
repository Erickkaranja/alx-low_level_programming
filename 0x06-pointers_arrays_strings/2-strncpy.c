#include "main.h"
/**
 * _strncpy - copies at most any inputted number
 * of bytes from string scr into dest.
 * @dest: The buffer storing the string
 * @src: The source string
 * @n: The maximum number of bytes to be copied from
 * src
 * Return: A pointer to the the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int index = 0, src_length = 0;
while (src[index++])
src_length++;

for (index = 0 ; src[index] && index < n ; index++)
{
dest[index] = src[index];
}
for (index = src_length ; index < n ; index++)
{
dest[index] = '\0';
}
return (dest);
}
