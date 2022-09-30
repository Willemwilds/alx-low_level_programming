#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: array of pointers
 *
 * Return: always 0.
 */


int main(int argc, char *argv[])
{

	int i, mul = 0;

	if (argc > 1 && (argc - 1) == 2)
	{

		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
