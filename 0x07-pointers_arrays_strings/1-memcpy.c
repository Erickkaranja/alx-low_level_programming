#include "main.h"
/**
*_memcpy - copies a memory area
*@dest: The destination of copied memory
*@src: The memory to becopied
*@n: bytes from memory src to be copied
*Return: Pointer to memory dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;

for (index = 0 ; index < n ; index++)
dest[index] = src[index];
return (dest);
}
