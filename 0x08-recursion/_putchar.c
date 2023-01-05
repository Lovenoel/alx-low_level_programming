#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character
 * Return: 1 on success and 0 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
