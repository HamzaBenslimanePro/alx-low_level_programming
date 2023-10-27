#include "main.h"

/**
 * _puts - blasla
 * @str: String to be used
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
