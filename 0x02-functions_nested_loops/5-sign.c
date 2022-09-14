#include "main.h"
/**
*print_sign()- print sign
*
*Return: return 1 if lowercase otherwise 0.
*
*@n: input parameter
*/


int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}


}
