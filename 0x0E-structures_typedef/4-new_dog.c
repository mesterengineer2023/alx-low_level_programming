#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - fill a dog data structure
 * @d: pointer to dog
 * @name: name of dog
 * @age: dog's age.
 * @owner: owner of dog
 * Return: always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
