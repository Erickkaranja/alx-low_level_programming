#include <stdlib.h>
#include "main.h"
/**
*malloc_checked - allocates memory using malloc
*@b: The size of memory to be checked
*Return: if fails terminate status 98 else pointer to allocatad
*memory
*/
void *malloc_checked(unsigned int b)
{
void *memory = malloc(b);

if (memory == NULL)
{
exit(98);
}
return (memory);
}
