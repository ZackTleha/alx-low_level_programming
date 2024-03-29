#include "dog.h"

/**
* free_dog - free memory
* @d: struct dog
*
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

