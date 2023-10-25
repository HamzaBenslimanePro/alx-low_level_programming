#include "main.h"

/**
 * factorial - blabla
 * @n: int used
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
}
