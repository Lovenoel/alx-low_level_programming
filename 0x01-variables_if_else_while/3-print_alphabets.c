#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabet in the lowercase,
 * and then in the uppercase followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z');
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}	
