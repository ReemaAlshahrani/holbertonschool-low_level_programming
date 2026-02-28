#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 using putchar
 *
 * Description: uses putchar and an int variable to print 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		/* 48 is the ASCII code for '0' */
		putchar(num + '0');
		num++;
	}
	putchar('\n');

	return (0);
}
