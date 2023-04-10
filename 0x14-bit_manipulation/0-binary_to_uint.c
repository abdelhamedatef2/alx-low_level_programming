#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u, p;
	int n;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
		;
	n--;
	for (p = 1, u = 0; n >= 0; n--)
	{
		if (b[n] == '0')
		{
			p *= 2;
			continue;
		}
		else if (b[n] == '1')
		{
			u += p;
			p *= 2;
			continue;
		}
		return (0);
	}
	return (u);
}
