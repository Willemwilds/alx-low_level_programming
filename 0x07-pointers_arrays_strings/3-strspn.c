#include "main.h"

/**
 *_strspn- compares string
 *@s: pointer string
 *@accept: pointer
 *
 *Return: return memory address
 */



unsigned int _strspn(char *s, char *accept)
{

	unsigned int l;
	int i;
	int j;

	l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;

		if (s[i] == accept[j])
			l++;
		if (accept[j] == '\0')
			return (l);


	}
	return (l);

}
