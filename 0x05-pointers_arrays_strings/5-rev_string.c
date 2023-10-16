#include "main.h"

/**
 * rev_string - blabla
 * @s: string to be used
 */

void rev_string(char *s)
{
	int i, temp;
	int N;

	for (N = 0; s[N] != '\0'; ++N)
		;
	for (i = 0; i < N / 2; i++)
	{
		temp = s[i];
		s[i] = s[N - 1 - i];
		s[N - 1 - i] = temp;
	}
}
