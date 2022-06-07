#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num + 1 != 10)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
