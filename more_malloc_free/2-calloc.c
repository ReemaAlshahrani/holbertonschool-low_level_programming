#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each element.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	/* check if inputs are zero */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* calculate total size to allocate */
	total_size = nmemb * size;

	/* allocate memory */
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	/* set memory to zero */
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
