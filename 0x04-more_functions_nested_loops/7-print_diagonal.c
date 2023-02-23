#include "main.h"
/* a function that draws a diagonal line on the terminal.
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
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
