#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Description: uses putchar and a while loop with if conditions
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
