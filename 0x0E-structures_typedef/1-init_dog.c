#include "dog.h"
#include <stdlib.h>

/**
*init_dog - Initializes a variable type struct dog.i
*@d: The dog to be initialized
*@name: The name of the dog.
*@age: The age of the dog.
*@owner: The owner of the dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
