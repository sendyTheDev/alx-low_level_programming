#include "search_algos.h"
/**
 * advanced_binary - basic binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return:  the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_ex(array, value, 0, (int)size - 1));
}

/**
 * binary_search_ex -  searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @value:  the value to search for
 * @first: start index of the subarray
 * @last: last index of the subarray
 * Return:  the index where value is located
 */
int binary_search_ex(int *array, int value, int first, int last)
{
	int i, mid;
	int last_idx = last;
	int first_idx = first;

	if (array == NULL)
		return (-1);

	while (first_idx <= last_idx)
	{
		printf("Searching in array:");
		for (i = first_idx; i <= last_idx; i++)
		{
			printf(" %i", array[i]);
			if (i != last_idx)
				printf(",");
		}
		printf("\n");

		mid = (int)((first_idx + last_idx) / 2);

		if (value > array[mid])
			first_idx = mid + 1;
		else if (value < array[mid])
			last_idx = mid - 1;
		else
		{
			if (value == array[mid - 1])
				return (binary_search_ex(array, value, first_idx, mid));
			else
				return (mid);
		}
	}
	return (-1);
}
