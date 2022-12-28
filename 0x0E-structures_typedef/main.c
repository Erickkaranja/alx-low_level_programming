#include "dog.h"
#include <stdio.h>

int main()
{
dog_t *my_dog;

my_dog = new_dog("lexxis", 14.00, "ommi");

printf("%s\n", my_dog->owner);

return (0);
}
