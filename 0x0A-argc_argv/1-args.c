#include <stdio.h>

/**
*main - program that prints the number of arguements passed to it
*@argc: The number of arguements supplied to the program
*@argv: An array of pointers to the arguements.
*Return: Always 0.
*/
int main(int _attribute_((_unused_)) argc, char *argv[])
{
printf("%d\n", argc - 1);

return (0);
}
