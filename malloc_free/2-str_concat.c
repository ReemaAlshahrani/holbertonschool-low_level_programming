#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space with s1 + s2,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate length of s2 */
	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for s1 + s2 + null terminator */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if malloc failed */
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	/* Copy s2 into concat */
	for (j = 0; j < len2; j++, i++)
	{
		concat[i] = s2[j];
	}

	/* Add null terminator at the end */
	concat[i] = '\0';

	return (concat);
}
