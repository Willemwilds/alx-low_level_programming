#include "main.h"
/**
*reverse_array- concatenates two strings
*@a: array
*@n: input
*
*Return: void
*/



void reverse_array(int *a, int n)
{

	int i;

	for (i = n; a[i] < n; i--)

		_putchar(a[i]);

}
