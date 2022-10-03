#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates an array and initializes it with a specific char
 * @size: the size of array
 * @c: arrays of character
 *
 * Return: NULL or pointer to array
 */



char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *pc;

	if (size == 0)
		return (NULL);

	pc = malloc(sizeof(*pc) * size);

	if (!pc)
		return (NULL);

	i = 0;

	while (i < size)
	{
		pc[i] = c;
		i++;
	}
	return (pc);
}
