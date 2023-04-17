#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * init_dog - initializes a struct dog variable
 *
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	if (name != NULL)
		d->name = strdup(name);

	d->age = age;

	if (owner != NULL)
		d->name = strdup(owner);
}
