#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter); /* First use of _putchar */
		letter++;
	}
	_putchar('\n'); /* Second use of _putchar */
}
