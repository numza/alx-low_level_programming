#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0
 *
 */
int main(void)
{
	char c = 122;

	while (c >= 97)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
