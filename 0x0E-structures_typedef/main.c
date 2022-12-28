#include "dog.h"
#include <stdio.h>

int main()
{
struct dog my_dog;

init_dog(&my_dog, "Lexxi", 12.00, "Karanja");

print_dog(&my_dog);
return (0);
}
