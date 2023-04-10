#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, y = 0;
	unsigned long int z = sizeof(unsigned long int) * 8;

	for (i = 0; i < z; i++)
	{
		if ((m & 1) != (n & 1))
			y = y + 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (y);
}
