#include "main.h"
/**
*leet- converts string to uppercase
*@n: input
*
*Return: char
*/



char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
