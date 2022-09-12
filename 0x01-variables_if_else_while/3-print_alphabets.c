#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints the alphabet
 *
 *Return: Always 0 (successful)
 */

int main(void)
{

char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);

}
