#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A Function that initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize first input
 * @name: name to initialize as input
 * @age: age to initialize input
 * @owner: owner to initialize input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
