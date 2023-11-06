#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * @d: pointer point to element structer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
