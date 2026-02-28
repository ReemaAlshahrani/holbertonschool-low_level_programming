#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Description: uses putchar to print z-a followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	/* Loop starts from 'z' and goes down to 'a' */
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
