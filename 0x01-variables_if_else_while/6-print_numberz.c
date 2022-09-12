#include <stdio.h>

/**
 * main - Print all single digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int numb;
for (numb = '0'; numb <= '9'; numb++)
{
putchar(numb);
}
putchar('\n');
return (0);

}
