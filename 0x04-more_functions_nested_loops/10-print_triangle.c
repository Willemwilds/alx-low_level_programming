#include "main.h"

/**
*print_triangle- print_square
*
*@size: input
*
*Return: Always 0.
*/



void print_triangle(int size)
{
int i, j, gap;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (gap = 1; gap <= (size - i); gap++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
