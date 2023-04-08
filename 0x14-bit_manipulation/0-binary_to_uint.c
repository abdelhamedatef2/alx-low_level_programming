#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int x = 0;

	if (b[x] == '\0')
		return (0);

	while ((b[x] == '0') || (b[x] == '1'))
	{
		num <<= 1;
		num += b[x] - '0';
		x++;
	}

	return (num);
}
