#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @size: number of elements of an array
 * @nmemb: the number of bytes
 * Return: pointer to the allocated memory
 * NULL when size or nmemb == 0
 * NULL when malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	p[i] = 0;
	return (p);
}
