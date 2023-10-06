#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints "Programming is like building a multilingual puzzle"
 * Description: A C program that prints the alphabet in lowercase,
 * and CAPS, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'd'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'f'; ch <= 'p'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'r'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
