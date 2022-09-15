#include "main.h"

/**
*_isdigit- Check for digits
*
*@c: input
*
*Return: returns int
*/



int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
