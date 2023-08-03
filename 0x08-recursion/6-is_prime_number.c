#include "main.h"

/**
 * is_prime_number - returns 1 if the integer is a prime number, or return 0
 * @n: the number to check for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime
 * @n: the number to check for primality
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
