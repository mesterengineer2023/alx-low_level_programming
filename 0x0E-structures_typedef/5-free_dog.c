#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - funtion to free dog
 * @d: size of
 * Return: return d
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
