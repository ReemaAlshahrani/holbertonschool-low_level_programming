#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Description: prints a-z then A-Z using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	/* First loop for lowercase a-z */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';
	/* Second loop for uppercase A-Z */
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
