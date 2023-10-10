#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This will Free Memory Allocated for a Struct Dog
 * @d: Struct Dog to free input
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
