#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct - creating a struct
 * @name: name of the dog
 * @age: its age
 * @owner: the owner
 * Return: success
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
