#include "main.h"

/**
 * _memset - blabla
 * @n: firt byte to change
 * @b: what it is changed into
 * @s: the memory area pointed
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

