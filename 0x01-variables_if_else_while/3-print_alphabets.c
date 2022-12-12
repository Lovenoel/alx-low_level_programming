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
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
