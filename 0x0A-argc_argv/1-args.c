#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: the array of the command listed
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc);
	return (0);
}
