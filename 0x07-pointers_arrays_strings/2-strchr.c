#include "main.h"

/**
 * _strchr - copies memory areas
 * @s: pointer string
 * @c: array
 *
 * Return: return memory address
 */

char *_strchr(char *s, char c)
{


	int i = 0;

	while (s[i] != '\0')

		i++;
	if (s[i] == c)
	{
	return (&s[i]);
	}

	return (0);


}
