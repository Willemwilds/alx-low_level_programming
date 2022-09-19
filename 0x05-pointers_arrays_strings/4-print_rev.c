#include "main.h"

/**
 * print_rev- prints string in reverse
 * @s: string parameter
 * Return: void
 */





void print_rev(char *s)
{

	int i = 0;
	int j;

	while (s[i] != '\0')
	{

		i++;
	}
		for (j = s[i - 1]; j >= 0; j--)
		{
		_putchar(s[j]);
		}
	_putchar('\n');

}
