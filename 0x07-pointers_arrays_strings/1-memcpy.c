#include "main.h"

/**
 * _memcpy - copies memory areas
 * @src: pointer
 * @dest: pointer
 * @n: unsigned int
 *
 * Return: return pointer
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	i = 0;

	while (i < n)
	{
		i++;

		dest[i] = src[i];
	}

	return (dest);

}
