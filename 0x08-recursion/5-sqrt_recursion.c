#include "main.h"

/**
 * _sqrt_recursion - blabla
 * @n: int to look for sqrt
 * Return: return sqrt of n
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	return (SQRT1(n, 0));
}
int SQRT1(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (SQRT1 (n, i + 1));
}
