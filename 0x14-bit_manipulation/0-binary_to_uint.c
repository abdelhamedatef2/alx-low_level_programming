#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int number = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[[length] == '0') || (b[length] == '1'))
	{
		number <<= 1;
		num += b[length] - '0';
		length++;
	}

	return (number);
}
