#include <stdlib.h>
#include "main.h"

/**
*string_nconcat - concats two strings
*@s1: The dest string
*@s2: the source string
*n: maximum bytes of s2 to concat on s1
*Return: NULL if function fails pointer to the newly allocared string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *s;
unsigned int index, length = n;

if (s1 ==  NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

for (index = 0 ; s1[index] ; index++)
length++;

s = malloc(sizeof(char) * (length + 1));
if (s == NULL)
return (NULL);
length = 0;

for (index = 0 ; s1[index] ; index++)
s[length++] = s1[index];

for (index = 0 ; s2[index] && index < n ; index++)
s[length++] = s2[index];

s[length] = '\0';

return (s);
}
