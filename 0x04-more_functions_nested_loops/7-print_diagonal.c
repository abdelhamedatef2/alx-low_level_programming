#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/


void print_diagonal(int n)
{
	int line, steps;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (steps = 0; steps < line; steps++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
