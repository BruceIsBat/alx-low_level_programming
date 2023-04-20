#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 *
 * @name: the name to print
 * @f: a function that takes a char pointer and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
