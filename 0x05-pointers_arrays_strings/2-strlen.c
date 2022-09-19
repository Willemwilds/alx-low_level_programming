#include "main.h"

/**
 * _strlen- takes a pointer to an integer
 * @s: pointer
 * Return: void
 */


int _strlen(char *s)
{

	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
