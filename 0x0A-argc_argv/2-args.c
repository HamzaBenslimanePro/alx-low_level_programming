#include "main.h"
#include <stdio.h>

/**
 * main - blabla
 * @argv: blabla
 * @argc: blabla
 * Return: returns 0 successful always
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
