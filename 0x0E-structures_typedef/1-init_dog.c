#include <stdio.h>
#include "dog.h"

/**
 * init_dog - entry point
 * @d: size of Structure.
 * @name: size of name
 * @age: size of age
 * @owner: size of
 * Return: always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
