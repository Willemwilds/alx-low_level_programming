#include <stdio.h>

/**
 * main - print all alphabets with exception of q and e
 *
 *
 * Return: (0) Success
 */


int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' || ch != 'p')
putchar(ch);
}
putchar('\n');
return (0);

}
