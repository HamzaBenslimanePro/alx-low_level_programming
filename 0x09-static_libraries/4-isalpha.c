#include "main.h"

/**
 * _isalpha - blabla
 * @c: the char to be checked
 * Return: 1 if letter, otherwise 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
