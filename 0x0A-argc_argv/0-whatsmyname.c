#include <stdio.h>

/**
 * main - prints the name of function
 * @argc: unused parameter
 * @argv: the array of the command listed
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
