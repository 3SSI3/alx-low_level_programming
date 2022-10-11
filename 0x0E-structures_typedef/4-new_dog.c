#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees dogs.
 * @d: struct dog.
 * Return: NO RETURN.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}
