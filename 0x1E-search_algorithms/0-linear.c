#include "search_algos.h"

/**
 * linear_search - Searche for value in array of ints
 * @array: pinter to first element of array to search
 * @size: num of array elements
 * @value: Value to search for
 *
 * Return: First indx where value found
 * -1 if value not in array or array NULL
 *  Print value every time then compare value to that being searched for
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
