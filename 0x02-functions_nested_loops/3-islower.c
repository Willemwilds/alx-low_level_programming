#include "main.h"
/**
*_islower()- print numbers in lower cases
*
*Return: return 1 if lowercase otherwise 0.
*
*@c: input parameter
*/



int _islower(int c)
{

	if (c == 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');


}
