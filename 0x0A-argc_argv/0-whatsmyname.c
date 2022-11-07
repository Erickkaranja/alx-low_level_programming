#include <stdio.h>
/**
*main - Prints the programmes name followed by a new line
*@argc: The number of arguments supplied to the program
*@argv: an array of pointers to the arguements
*Return: Always 0.
*/

int main(int argc,char __attribute__((__unused__)) *argv[])
{
printf("%s\n", argv[0]);

return (0);
}
