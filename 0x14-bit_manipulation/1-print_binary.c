#include "main.h"

/**
 * print_binary - print binary representation of num.
 * @n: the num to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
