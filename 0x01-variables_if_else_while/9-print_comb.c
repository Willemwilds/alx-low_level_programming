#include <stdio.h>

/**
 *main - Prints digits with coma
 *
 *Return: Always 0 (Success)
 */


int main(void)
{

char num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num < '9')
putchar(',');
}
putchar('\n');
return (0);

}
