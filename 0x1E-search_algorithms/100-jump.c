#include "search_algos.h"

/**
 * jump_search - Searche value in sorted array
 * @array: Pinter to first element of array
 * @size: Num of elements of array
 * @value: Value being searched for
 *
 * Return: First indx where value located
 * -1 if value not present or array  NULL
 *  Must use square root of array size for jump step
 *  Must print value every comparison
 */
int jump_search(int *array, size_t size, int value)
{
	int jump;
	size_t i;

	if (!array)
		return (-1);
	jump = sqrt(size);
	i = 0;
	do {
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
		if (i >= size)
			break;
	} while (array[i] < value);
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	i -= jump;
	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		++i;
		if (i == size)
			return (-1);
	}
	if (array[i] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
