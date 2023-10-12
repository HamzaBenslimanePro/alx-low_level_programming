#include "main.h"

/**
 * more_numbers - blabla
 * Description: A C program that prints a list of numbers 0-9
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 1; b <= 14 ; b++)
		{
			if (b >=10)
				_putchar('1');
			_putchar(b % 10 + '0');
		}
		_putchar ('\n');
	}
}
