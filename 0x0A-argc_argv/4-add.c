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

	int i, sum = 0;

	if (argc > 1)
	{

		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc < 2)
	{
		printf("%d\n", 0);

	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
