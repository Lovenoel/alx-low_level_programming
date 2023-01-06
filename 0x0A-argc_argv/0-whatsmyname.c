#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of function
 * @argc: count the arguments
 * @argv: the arguments
 * Return: always 0 on success
 */
int main(int argc, char *argv[0])
{
	(void) argv;
	printf("%s\n", argv[0]);

	return (0);
}
