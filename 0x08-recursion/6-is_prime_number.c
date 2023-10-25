#include "main.h"

int actual_prime_func(int n, int i);

/**
 * is_prime_number - blabla
 * actual_prime_func - blabla
 * @n: int to prim nbr
 * Return: prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_func(n, n - 1));
}

/**
 * actual_prime_func - blabla
 * @n: int to prim nbr
 * @i: int for counting
 * Return: prime number
 */

int actual_prime_func(int n, int i)
{
	if (i == 1)
		return (0);
	if (n % i == 0 && i > 0)
		return (actual_prime_func(n, i - 1));
}	
