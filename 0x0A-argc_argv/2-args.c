#include <stdio.h>

/**
*main - program that prints all the arguements it receives
*@argc: The number of arguements supplied to the program
*@argv: An array of pointers to the arguements.
*Return: Always 0.
*/
int main(int argc, char *argv[])
{
int arg;

for (arg = 0 ; arg < argc ; arg++)
printf("%s\n", argv[arg]);

return (0);
}
