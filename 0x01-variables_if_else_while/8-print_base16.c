#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints "Programming is like building a multilingual puzzle"
 * Description: A C program that prints a list of numbers 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
