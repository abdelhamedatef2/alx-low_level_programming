#include"main.h"

/**
 * print_to_98 - print n to 98 counts
 *Numbers must be separated by a comma, followed by a space
 *Numbers should be printed in order
 *The first printed number should be the number passed to your function
 *The last printed number should be 98
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i >= 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i <= 98; i++)
			printf("%d, ", i);
	printf("98\n");
}
