#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
dog_t *my_dog;

my_dog = new_dog("lexxis", 14.00, "ommi");

printf("%s wolf! %.2f\n", my_dog->owner, my_dog->age);
free(my_dog);
return (0);
}
