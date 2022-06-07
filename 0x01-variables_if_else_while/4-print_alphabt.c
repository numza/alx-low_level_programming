#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		if (c != 'q')
		{
			if (c != 'e')
			{
				putchar(c);
			}
		}
		c++;
	}

	putchar('\n');
	return (0);
}
