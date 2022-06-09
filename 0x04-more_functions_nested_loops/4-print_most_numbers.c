#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	for (int num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
	}

	_putchar('\n');
}
