#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			/* طباعة المسافات: تكون (الحجم - رقم السطر الحالي) */
			for (column = 1; column <= (size - row); column++)
			{
				_putchar(' ');
			}
			/* طباعة الرموز: تكون مساوية لرقم السطر الحالي */
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
