#include "main.h"

/**
 * _isupper - blabla
 * @c: the char to be checked
 * Return: 1 if success, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
