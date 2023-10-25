#include "main.h"

/**
 * _pow_recursion - blabla
 * @x: int used
 * @y: int used
 * Return: return x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
