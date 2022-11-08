#include <stdlib.h>
#include "main.h"
/**
*str_concat - concatenates two strings
*@s1: The string to concat upon
*@s2: string to concat  to s1.
*Return: if concatenation fails - NULL
*Else ponter to the newly allocated pointer
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int index, s_index = 0, length = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (index = 0 ; s1[index] || s2[index] ; index++)
length++;

s = malloc(sizeof(char) * length);

if (s == NULL)
{
return (NULL);

}
for (index = 0 ; s1[index] ; index++)
s[s_index++] = s1[index];

for (index = 0 ; s2[index] ; index++)
s[s_index++] = s2[index];

return (s);
}
