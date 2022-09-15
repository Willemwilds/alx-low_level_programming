#include "main.h"

/**
*_isupper- Check for uppercase letters
*
*@c: input
*
*Return: returns int
*/



int _isupper(int c)
{

	if (c == 'A' || c <= 'Z')
		return (1);
	else
		return (0);

}
