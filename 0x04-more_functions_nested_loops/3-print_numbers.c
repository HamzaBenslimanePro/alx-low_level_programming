#include "main.h"
/**
 * print_numbers - does it
 */
void print_numbers(void)
{
	char ch;

	ch = '0';
	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
