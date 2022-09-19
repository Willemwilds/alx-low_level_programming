#include "main.h"

/**
 * puts_half- prints half of a string
 * @str: string
 * Return: void
 */




void puts_half(char *str)
{
	int half, odd, i, n;

	int len = 0;

	while (str[len] != '\0')
	{
		len++;

		half = len / 2;

		odd = len % 2 != 0;

		if (odd)
		{
			n = (len - 1) / 2;

			for (i = n; i <= len; i++)

				_putchar(str[len - 1]);
		}

		else
		{

			for (i = half; i <= len; i++)
			{
				_putchar(str[i]);
			}

		}
	_putchar('\n');
	}

}
