#include "holberton.h"
#include <string.h>

/**
* _strcat -  concatenates two strings.
*
* @dest: A pointer to the string to be concatenated upon.
* @src: The source string to be append to @dest.
* Return: A pointer to the destination string @dest.
*/

char *_strcat(char *dest, char *src)
{
char *start = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (start);
}
