#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: the minimum value (included).
 * @max: the maximum value (included).
 *
 * Return: the pointer to the newly created array.
 * if min > max, return NULL.
 * if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/* check if min is greater than max */
	if (min > max)
		return (NULL);

	/* calculate the size of the array */
	/* +1 because both min and max are included */
	size = max - min + 1;

	/* allocate memory for the array of integers */
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	/* fill the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
