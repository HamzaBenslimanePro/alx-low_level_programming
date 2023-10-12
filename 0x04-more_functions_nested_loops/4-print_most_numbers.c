#include "main.h"

/**
 * print_most_numbers - blabla
 * Description: A C program that prints the alphabet in lowercase,
 * and CAPS, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
			ch++;
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
