#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the matrix.
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* Diagonal 1: (0,0), (1,1), (2,2)... index is i * size + i */
		sum1 += a[i * size + i];

		/* Diagonal 2: (0, size-1), (1, size-2)... index is i * size + (size - 1 - i) */
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
