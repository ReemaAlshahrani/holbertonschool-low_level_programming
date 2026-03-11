#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	/* Loop only to the middle of the array */
	for (i = 0; i < n / 2; i++)
	{
		/* Swap elements using a temporary variable */
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
