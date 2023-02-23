#iclude "main.h"
/*a function that prints 10 times the numbers
 * , from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int i = 0, j = 0;

	for (i ; i < 11 ; i++)
	{
		for (j ; j < 15 ; j++)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
