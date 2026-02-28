#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Description: numbers separated by comma and space, ascending order
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0'); /* الاستخدام الأول */
		if (n != 9)
		{
			putchar(','); /* الاستخدام الثاني */
			putchar(' '); /* الاستخدام الثالث */
		}
	}
	putchar('\n'); /* الاستخدام الرابع */

	return (0);
}
