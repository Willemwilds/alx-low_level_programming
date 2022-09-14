int x;

#include "main.h"


/**
*main - Print alphabet
*
* *Return: return void
*/


void print_alphabet(void)
{

char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');

}
int main (void)
{
print_alphabet();
return (0);

}
