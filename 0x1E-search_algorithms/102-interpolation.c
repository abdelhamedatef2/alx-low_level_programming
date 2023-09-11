#include "search_algos.h"

/**
 * interpolation_search - Search for value in sorted array
 * @array: Ponter to first element of array being searched for
 * @size: Num elements of array
 * @value: Value being searched for
 *
 * Return: First indx where value found
 * -1 if value not found or NULL array
 * Print every time value array being compared search value
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
			return (array[low] == value ? low : -1);
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
