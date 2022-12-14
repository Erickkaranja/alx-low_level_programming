#include <stdlib.h>
#include "main.h"
/**
*_strdup - returns a newly allocated space in memory
*str: the string to be copied
*Return: If str = NULL Return null
*else pointer to the duplicate string
*/

char *_strdup(char *str)
{
char *s;
int index, length = 0;

if (str == NULL)
{
return (NULL);
}
for (index = 0 ; str[index] ; index++)
length++;
s = malloc(sizeof(char) * (length + 1));
if (s == NULL)
return (NULL);

for (index = 0 ; str[index] ; index++)
s[index] = str[index];

s[length] = '\0';

return (s);

}
