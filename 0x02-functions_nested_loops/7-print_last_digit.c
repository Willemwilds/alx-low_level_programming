#include "main.h"
/**
*print_last_digit-prints()- Last digits
*
*Return: returns last value.
*
*@n: input parameter
*/


int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = n % 10;
	}
	else if (n < 0)
	{
		last = -(n % 10);
	}
	_putchar('0' + last);
	return (last);
}
