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
	int a = 0;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
