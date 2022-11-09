#include <stdlib.h>
#include "main.h"

/**
*create_array - 0creates an array of char and initializes
*to a particular specific char
*@size: reserved bytes in memory
*@c: The value of character array
*Return: NULL if size=0 else pointer to c
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);

if (array == NULL)
{
return (NULL);
}
for (index = 0 ; index < size ; index++)
array[index] = c;

return (array);
}
