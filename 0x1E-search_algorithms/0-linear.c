#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - implements linear search algorithm.
*@array: The array of search.
*@size: represents the size of the input array.
*@value: search element in the array.
* Return: returns the index of the passed value else -1.
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array != NULL)
	{
		for (i = 0 ; i < (int)size ; i++)
		{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		}
	}
	return (-1);
}
