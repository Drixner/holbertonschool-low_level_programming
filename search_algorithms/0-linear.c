#include "search_algos.h"
/**
 * linear_search - search value in an array using the Linear search algorithm
 * @array: pointer to the array
 * @size: array size
 * @value: value to match
 * Return: zero if success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL || !value)
		return (-1);
	for (count = 0 ; count < size ; count++)
	{
		printf("Value checked array[%li] = [%i]\n", count, array[count]);
		if (array[count] == value)
		{
			return (count);
		}
	}
	return (-1);
}
