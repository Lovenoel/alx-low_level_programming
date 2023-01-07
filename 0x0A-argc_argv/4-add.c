#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the parameter
 * @argv: the array of the command listed
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i, j, k;

	for (i = 1; i < argc; i++)
	{
		for (j = 1; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
