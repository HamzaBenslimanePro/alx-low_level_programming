#include <stdio.h>

/**
 * main - prints "Programming is like building a multilingual puzzle"
 * Description: A C program that prints a list of numbers 0-9
 * Return: Always 0 (Success)
 */

int main(void)
{
    int d1, d2;
    int sep1 = 0;
    int sep2 = 0;

    d1 = 48;
    while (d1 < 58)
    {
        d2 = d1 + 1;
        while (d2 < 58)
        {
            putchar(sep1);
            putchar(sep2);
            putchar(d1);
            putchar(d2);
            d2++;
            sep1 = ',';
            sep2 = ' ';
        }
        d1++;
    }

    putchar(10);
    return (0);
}
