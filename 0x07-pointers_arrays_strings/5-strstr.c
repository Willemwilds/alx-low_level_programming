#include "main.h"

/**
 *_strstr- finds first occurrence of a first string
 *@haystack: pointer string
 *@needle: pointer
 *
 *Return: return memory address
 */


char  *_strstr(char *haystack, char *needle)
{
char *str1, *str2; /*Declaring variables*/

while (*haystack != '\0')
{
str1 = haystack; /*values*/
str2 = needle;

/*Star WHILE*/
while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
{
haystack++;
str2++;
}
if (*str2 == '\0')
return (str1);
haystack = str1 + 1;
}
return (0);
}
