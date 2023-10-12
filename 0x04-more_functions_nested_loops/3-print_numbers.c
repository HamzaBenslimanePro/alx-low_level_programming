#include "main.h"
/**
 * print_numbers - does it
 */
void print_numbers(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		ch = '0';
		while (ch <= '9')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
