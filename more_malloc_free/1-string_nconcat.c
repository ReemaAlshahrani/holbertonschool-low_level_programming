#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes from s2 to concatenate.
 *
 * Return: pointer to newly allocated space in memory.
 * if the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculate lengths of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* check if n is greater or equal to s2 length */
	if (n >= len2)
		n = len2;

	/* allocate memory: s1 length + n bytes of s2 + null terminator */
	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	/* copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* copy n bytes of s2 into concat */
	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	/* add null terminator */
	concat[i + j] = '\0';

	return (concat);
}
