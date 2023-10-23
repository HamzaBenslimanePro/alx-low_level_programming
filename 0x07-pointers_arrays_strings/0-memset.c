#include "main.h"

/**
 * _memcpy - blabla
 * @n: firt byte to change
 * @b: what it is changed into
 * @s: the memory area pointed
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (i < n)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
