#include "main.h"
/**
 * main - entry point
 *
 * @c: parameter
 *
 * Return: int
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || isalpha(c))
		return (1);
	else
		return (0);
}
