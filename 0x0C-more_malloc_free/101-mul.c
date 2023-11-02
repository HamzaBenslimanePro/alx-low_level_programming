#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - xxxxxxxxxxxxxxxxx
 * @s: xxxxxxxxxxxxxxxxxxxx
 * Return: xxxxxxxxxxxxxxxxxx
 */
 int _isdigit(int s)
{
	return (s >= '0' && s <= '9');
}

/**
 * _strlen - blabla
 * @s: char used
 * Return: returns the counter c
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;

	return (c);
}

/**
 * errors - xxxxxxxxxxxxx
 */

void errors(void)
{
	printf("errors\n");
	exit(98);
}

/**
 * main - xxxxxxxxxxxxxxx
 * @argv: xxxxxxxxxxxxxxxxxxxxxxx
 * @argc: xxxxxxxxxxxxxxxxxxxxxxx
 * Return: xxxxxxxxxxxxxxxxxxxx
 */

int main(*char argv[], int argc)
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s[1] = argv(1); s[2] = argv(2);
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
	{
		errors(0);
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; l--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result [len1 +len2 + 1] += carry;
	}
	for (i = 0; i < len1 - 1; i++)
	{
		if (result[i])
			a=1;
		if(a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
