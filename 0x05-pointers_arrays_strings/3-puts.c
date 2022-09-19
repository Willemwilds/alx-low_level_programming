#include "main.h"

/**
 * _strlen- prints a string
 * @str: pointer
 * Return: void
 */


void _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');



}
