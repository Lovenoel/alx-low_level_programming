#include "main.h"

/**
 * _strncpy -  copies a string, including the terminating
 * null byte, using at most an inputted number of bytes
 * @dest: first string
 * @src: second string
 * @n: max number of bytes  copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
