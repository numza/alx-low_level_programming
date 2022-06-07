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
		if (num -1 < 0)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(',');
			putchar(' ');
			putchar(num + '0');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
