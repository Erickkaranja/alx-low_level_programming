#include "main.h"

/**
*_memcpy - copies one memory block to another
*@src: const memory to be read from.
*@dest:destination memory to be copied to.
*@n: number of bytes to be copied.
*Return:dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;

for (index = 0 ; index < n ; index++)
{
src[index] = dest[index];
}
return (dest);
}
