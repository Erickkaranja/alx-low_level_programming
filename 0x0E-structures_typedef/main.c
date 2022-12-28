#include "dog.h"
#include <stdio.h>

int main()
{

struct dog my_dog;
my_dog.name = "tommy";
my_dog.age = 2.00;
my_dog.owner = "Karanja";

printf("%s, %.2f, %s\n", my_dog.name, my_dog.age, my_dog.owner);
return (0);
}
