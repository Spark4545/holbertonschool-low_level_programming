#include "main.h"

/**
 *
 */

int is_prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return(is_prime(n, div + 1));
}

/**
 *
 */

int is_prime_number(int n)
{
	int div = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_prime(n, div));
}
