#include "main.h"
/**
*_isalpha()- print numbers in lower cases
*
*Return: return 1 if lowercase otherwise 0.
*
*@c: input parameter
*/



int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
