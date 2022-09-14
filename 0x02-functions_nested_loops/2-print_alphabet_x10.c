#include "main.h"

/**
*print_alphabet - Print alphabet
*
*Return: return void
*/


void print_alphabet_x10(void)
{

	int num;

	for (num = 0; num <= 9; num++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');

	}

}
