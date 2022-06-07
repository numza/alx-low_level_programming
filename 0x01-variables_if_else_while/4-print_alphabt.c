#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		if (c != 'q' || c != 'e')
		{
			putchr(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
