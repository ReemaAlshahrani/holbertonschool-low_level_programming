#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Description: prints 0-9 then a-f using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char la;

	/* First loop for numbers 0-9 */
	num = 0;
	while (num < 10)
	{
		putchar(num + '0'); /* Use 1 */
		num++;
	}

	/* Second loop for letters a-f */
	la = 'a';
	while (la <= 'f')
	{
		putchar(la); /* Use 2 */
		la++;
	}

	putchar('\n'); /* Use 3 */

	return (0);
}
