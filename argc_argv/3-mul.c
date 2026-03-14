#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the correct number of arguments (program name + 2 numbers) */
	/* is provided */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the string arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Multiply the two numbers and print the result */
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
