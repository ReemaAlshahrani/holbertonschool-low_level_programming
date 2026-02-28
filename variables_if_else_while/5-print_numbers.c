#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Description: uses a while loop to print numbers 0 through 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	/* Loop starts from 0 and ends at 9 */
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");

	return (0);
}
