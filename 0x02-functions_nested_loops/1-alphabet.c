#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	for (int i = 97 ; i < 123 ; i++)
		putchar(i);
	putchar('\n');
}
int main(void)
{
	print_alphabet();

	return (0);
}
