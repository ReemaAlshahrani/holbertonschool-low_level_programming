#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed to by dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Loop until the null byte is reached */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Copy the terminating null byte */
	dest[i] = '\0';

	/* Return the pointer to the destination buffer */
	return (dest);
}
