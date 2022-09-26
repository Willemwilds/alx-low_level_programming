#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointer by a pointer
 * @s: pointer
 * @b: variable element
 * @n: unsigned int
 *
 * Return: return pointer
 */



char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	i = 0;

	while (i < n)
		s[i] = b;
		i++;

		return (s);

}
