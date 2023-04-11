#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: parameter
 * @c: parameter
 *
 * Return: success always
 */
char *create_array(unsigned int size, char c) {
    char *array;
    unsigned int i;
    if (size == 0) {
        return NULL;
    }
    array = (char *) malloc(size * sizeof(char));
    if (array == NULL) {
        return NULL;
    }
    for (i = 0; i < size; i++) {
        array[i] = c;
    }
    return array;
}
