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
	char cha = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (cha = 'A'; cha <= 'Z'; ch++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
