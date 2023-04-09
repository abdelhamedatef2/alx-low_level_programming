#include "main.h"

/**
 * binary_to_uint - Converts a binary num to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *        Otherwise - the converted number.
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, x = 1;
	int y;

	if (b == '\0')
		return (0);

	for (y = 0; b[y];)
		y++;

	for (y -= 1; y >= 0; y--)
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);

		num += (b[y] - '0') * x;
		x *= 2;
	}

	return (num);
}
