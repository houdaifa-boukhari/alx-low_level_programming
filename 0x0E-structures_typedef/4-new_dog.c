#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = (char *)malloc(sizeof(char) * (strlen(name) + 1));
	if (!(d->name))
	{
		free(d);
		return (NULL);
	}
	d->owner = (char *)malloc(sizeof(char) * (strlen(owner) + 1));
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);
	return (d);
}
