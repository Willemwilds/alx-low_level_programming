#include <stdio.h>

/**
 * main - prints arguments received
 *
 * @argc: argument count
 * @argv: array of pointers
 *
 * Return: always 0.
 */


int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++);
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
