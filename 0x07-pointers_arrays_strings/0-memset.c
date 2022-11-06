#include "main.h"
/**
*_memset - copies bytes b pointed to from *s
*@s:Memory pointed to
*@b:The character to be filled
*@n: number of times b should be placed
*Return: the pointerto s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
{
*(s + i) = b;
}
return (s);
}
