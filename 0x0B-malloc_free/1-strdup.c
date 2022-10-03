#include "main.h"
#include <stdlib.h>


/**
 * _strdup - points to memory of a duplicated string
 * @str - original string
 *
 * Return: NULL or pointer to duplicated string
 */


char *_strdup(char *str)
{

	unsigned int i = 0, len = 0;
	char *new_str;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[len] = '\0';

	return (new_str);

}
