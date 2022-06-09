#include "main.h"
/**
 * print_alphabet_10x - Entry point
 *
 * Return: void
 *
 *//
void print_alphabet_10x(void)
{
	int i = 1;
	char c = 97;

	While (i <= 10)
	{
		c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
