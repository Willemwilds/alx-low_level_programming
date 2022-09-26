#include "main.h"

/**
 *_strstr- finds first occurrence of a first string
 *@haystack: pointer string
 *@needle: pointer
 *
 *Return: return memory address
 */




char *_strstr(char *haystack, char *needle)
{

	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *(needle + 1))

			return (needle);

	}
	return (0);

}
