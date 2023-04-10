#include "main.h"
/**
 * get_bit - return value of index
 * @n: unsigned long int to search
 * @index: index num to return
 * Return: the value of the bit at index index or -1
 *  if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
