#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a struct dog
 * @d: pointer to the dog to print
 *
 * Return: void
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
