#include "main.h"

/**
 * _atoi- function
 * @s: pointer string
 * Return: Always 0.
 */




int _atoi(char *s)
{

	int sign = 0;
	unsigned int num = 0;

	while (*s != '\0')
	{

		if (*s == '-')
		{
			sign++;
		}
		if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		if (*s == ',')
		{
			break;
		}
		s++;
	}
	if (sign % 2 != 0)
	{
		return (-num);

	}
	return (num);

}
