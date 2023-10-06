#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints "Programming is like building a multilingual puzzle"
 * Description: A C program that prints a list of numbers 0-9
 * Return: Always 0 (Success)
 */
int main() {
    int d1, d2;
    const char *sep = "";

    for (d1 = '0'; d1 <= '9'; d1++) {
            fputs(sep, stdout);
            sep = ", ";
            putchar(d1);
    }
    putchar('\n');
    return 0;
}
