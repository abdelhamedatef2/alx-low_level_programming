#include<stdio.h>

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	for (int j = 1 ; j < 11 ; j++)
	{
		for (int i = 97 ; i < 123 ; i++)
			{
				putchar (i);
			}
		putchar('\n');
	}
}
int main (void)
{
	print_alphabet_x10();
	return (0);
}
