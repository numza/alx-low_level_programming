#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n = 0;
	char c = 97;

	while (n < 16)
	{
		if (n <= 9)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(c);
			c++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
