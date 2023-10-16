#include "main.h"

/**
 * _strlen - blabla
 * @s: char used
 * return: returns the counter c
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;

	return (c);
}
