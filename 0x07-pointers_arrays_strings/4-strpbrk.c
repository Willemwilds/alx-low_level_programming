#include "main.h"

/**
 *_strpbrk- compares string
 *@s: pointer string
 *@accept: pointer
 *
 *Return: return memory address
 */




char *_strpbrk(char *s, char *accept)
{

	int i;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (accept[i] == *(s + 1))

			return (s);

	}
	return (0);

}
