#include "dog.h"
/**
 * init_dog - initializes a struct dog variable
 * @d: pointer
 * @name: name
 * @age: age of the dog
 * @owner: owner
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
