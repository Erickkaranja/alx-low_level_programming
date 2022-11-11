#include <stdlib.h>
#include "main.h"

/**
*_calloc - allocates memory for a certain number
*of elements each of an iputted byte size
*@nmemb: The number of elements
*@size: the byte of each array elements
*Return: nmemb = 0 || size = 0 function fail
*otherwise a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memory;
char *s;
unsigned int index;

if (nmemb == 0 || size == 0)
return (NULL);

memory = malloc(size * nmemb);
if (memory == NULL)
return (NULL);

s = memory;

for (index = 0 ; index < (size * nmemb) ; index++)
s[index] = '\0';

return (memory);
}
