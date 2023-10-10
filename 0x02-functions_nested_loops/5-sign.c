#include "main.h"

/**
 * print_sign - blabla
 * @n: int to check
 * Return: 1 and prints + if sup then 0
 * prints 0 if eauql to zero
 * -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		-putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
