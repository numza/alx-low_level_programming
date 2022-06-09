#include "main.h"
/**
 * _islower -Entry point
 *
 * @c: paramiter
 *
 * Return: int
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
