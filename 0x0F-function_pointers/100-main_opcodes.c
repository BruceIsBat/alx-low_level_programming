#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *start, int num_bytes);

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
    int num_bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    print_opcodes((char *)&main, num_bytes);

    return (0);
}

/**
 * print_opcodes - Prints the opcodes of a function
 * @start: A pointer to the start of the function
 * @num_bytes: The number of bytes to print
 */
void print_opcodes(char *start, int num_bytes)
{
    int i;

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x ", start[i] & 0xff);
    }

    printf("\n");
}
