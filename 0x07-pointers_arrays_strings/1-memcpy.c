#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the new menory area
 * @n: the number of memory bytes
 * @src: the source memory
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
