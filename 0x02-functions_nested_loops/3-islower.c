#include<stdio.h>

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

int _islower(int c)
{
	if (c <= 97 && c >= 122)
		return (1);
	else
		return (0);
}

int main(void)
{
	int c;

	_islower(c);

	return (0);
}
