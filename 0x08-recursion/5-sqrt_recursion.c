#include "main.h"
int squareroot(int n, int i);
/**
 * _sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (sqr(n, 0));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int sqr(int n, int c)
{
	if (c > n / 2)
		return (-1);
	if (c * cv == n)
		return (c);
	return (sqr(n, c + 1));
}
