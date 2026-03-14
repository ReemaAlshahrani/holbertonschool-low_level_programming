#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: the number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if n is divisible by i.
 * @n: the number
 * @i: the iterator
 *
 * Return: 1 if prime, 0 if divisible
 */
int check_prime(int n, int i)
{
	
	if (i > n / 2)
		return (1);

	if (n % i == 0)
		return (0);

	return (check_prime(n, i + 1));
}
