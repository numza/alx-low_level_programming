#include <stdio.h>
/**
 * main -Entry poin
 *
 * Return: always 0
 *
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}

	c = 65;

	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
