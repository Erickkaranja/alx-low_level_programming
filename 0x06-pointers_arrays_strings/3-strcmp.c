#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: difference in character values
 */
int _strcmp(char *s1, char *s2)
{
int flag;
int i;
for (i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
if (s1[i] != s2[i])
flag++;
else
{
flag = s1[i] - s2[i];
}
return (flag);
}
