#include "main.h"
#include <stdlib.h>


/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: NULL or pointer to array
 */


char *str_concat(char *s1, char *s2)
{

	int i = 0, j = 0;
	char *new_str;
	int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	len = i + j;

	new_str = malloc(sizeof(char) * (len) + 1);

	if (new_str == NULL)
		return (NULL);

	int a = 0, b = 0;

	while (s1[a] != '\0')
	{
		new_str[b] = s1[a];
		a++;
		b++;
	}
	while (s2[a] != '\0')
	{
		new_str[b] = s2[a];
		a++
		b++;
	}
	new_str[j] = '\0';

	return (new_str);
}
