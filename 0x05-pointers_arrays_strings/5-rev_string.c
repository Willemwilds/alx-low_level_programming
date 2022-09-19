#include "main.h"

/**
 * rev_string- prints string in reverse
 * @s: string parameter
 * Return: void
 */





void rev_string(char *s)
{

	int i = 0;
	int j = 0;
	int k = 0;

	while (s[i] != '\0')
	{

		i++;
	}

	i = i - 1;

	while (j < i + 1 / 2)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;

		i--;
		j++;
	}
}
