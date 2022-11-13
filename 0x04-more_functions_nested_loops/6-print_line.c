#include "main.h"

/**
*print_line- Draws line
*@n: integer
*Return: Always 0.
*/



void print_line(int n)
{
	int a = '_';
	int b;

	for (b = 0; b < n; b++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar(a);
	}
	_putchar('\n');
}
