#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int res = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			res = (res * 10) + (s[i] - '0');
		}
		else if (found_digit)
			break;
		i++;
	}

	return (res * sign);
}
