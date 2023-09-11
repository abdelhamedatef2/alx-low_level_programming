#include "search_algos.h"

/**
 * advanced_binary - Searh for valu in array
 * @array: Ponter to first element array
 * @size: Elemen in array
 * @value: Value searched for
 *
 * Return: Indx where value fund
 * -1 if value found or NULL array
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; ++i)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
	if (size == 1)
		return (*array == value ? *array : -1);
	if (array[size / 2] < value)
		return (advanced_binary(array + (size / 2) + 1, size / 2, value));
	if (array[size / 2] == value)
		return (array[size / 2]);
	return (advanced_binary(array, size / 2, value));
}
/* size is n */
/* value is x */
