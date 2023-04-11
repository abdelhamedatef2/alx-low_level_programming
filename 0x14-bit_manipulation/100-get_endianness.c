#include "main.h"
/**
 *get_endianness - function checks the endianness
 *Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *)&x;

	if (*y)
		return (1);
	else
		return (0);
}
