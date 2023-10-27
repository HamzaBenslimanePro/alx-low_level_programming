#include "main.h"

/**
 * _islower- blabla
 * @c: the char to be checked
 * Return: 1 if success, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
