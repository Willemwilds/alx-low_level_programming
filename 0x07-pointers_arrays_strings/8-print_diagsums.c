#include "main.h"
#include <stdio.h>

/**
 *print_diagsums- finds first occurrence of a first string
 *@a: pointer
 *@size: integer
 *
 *Return: void
 */



void print_diagsums(int *a, int size)
{

	int i;

	int s1 = 0;

	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + (size * i));
		s2 += *(a + (size * i + size - 1 - i));
	}

	printf("%d, ", s1);
	printf("%d\n", s2);

}
