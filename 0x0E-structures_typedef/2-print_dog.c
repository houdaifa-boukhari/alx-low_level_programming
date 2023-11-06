#include "dog.h"

/**
 * print_dog -  print element the structer
 * @d: pointer point to element structer
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	char *null = "(nil)";
	if (!d)
		return ;
	printf("Name: %s\n", d->name ? d->name :  null);
	printf("Age: %lf\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : null);
}
