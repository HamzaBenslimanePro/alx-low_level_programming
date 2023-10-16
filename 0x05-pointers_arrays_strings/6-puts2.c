#include "main.h"

/**
 * puts2 - blabla
 * @str: string used
 */

void puts2(char *str)
{
	int i, l;

	for (l = 0; str[l] != '\0'; ++l)
		;
	for (i = 0; i < l; i++)
	{
	if (i % 2 == 0)
	{
		putchar (str[i]);
	}
	}
	putchar ('\n');
}
