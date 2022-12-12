#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase except q and e
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z');
	{
		if ((ch != 'e') && (ch != 'q');
	        { 
                	putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
