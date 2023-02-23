#include "main."
/* a function that prints the numbers, 
 * from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
	int i = 0;

	for (i ; i < 10 ; i++)
		_putchar((i % 10) + '0');
		_putchar('\n');
}
