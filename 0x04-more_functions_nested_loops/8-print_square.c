#include "main.h"

/**
*print_square- Draws a square
*
*Return: Always 0.
*
*@size: input
*/





void print_square(int size)
{
int i, j;

if (size <= 0)
_putchar('\n');
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar('#');
_putchar('\n');
}
}
