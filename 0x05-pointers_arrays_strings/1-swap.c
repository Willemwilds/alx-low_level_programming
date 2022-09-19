#include "main.h"

/**
 * swap_int- assigns pointer to another pointer.
 * @a: pointer
 * @b: pointer
 * Return: void
 */



void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;

}
