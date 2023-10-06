#include <stdio.h>

/**
 * main - prints "Programming is like building a multilingual puzzle"
 * Description: A C program that prints a list of numbers 0-9
 * Return: Always 0 (Success)
 */

int main(void)
{
        int a, b, c;

        for (a = 0; a < 8; a++)
        {
                for (b = a + 1; b < 9; b++)
                {
                        for (c = b + 1; c < 10; c++)
                        {
                                if (a != b && a != c && b != c)
                                {
                                        putchar(a + '0');
                                        putchar(b + '0');
                                        putchar(c + '0');
                                        if (a + b + c < 24)
                                        {
                                                putchar(',');
                                                putchar(' ');
                                        }
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
