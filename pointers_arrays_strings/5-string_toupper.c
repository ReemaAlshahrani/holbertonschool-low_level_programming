#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		/* Check if the character is lowercase (between a and z) */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/* Convert to uppercase by subtracting 32 from ASCII value */
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
