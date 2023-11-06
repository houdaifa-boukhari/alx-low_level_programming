#include "dog.h"

/**
 * free_dog - free element dog
 * @d: pownter point by element the structer
 *
 * Return: nothing
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
