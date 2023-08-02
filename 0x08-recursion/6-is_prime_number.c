#include "main.h"

/**
 * testing - testing if a number is prime
 * @num1: integer given
 * @num2: integer given
 * Return: 1 if prime , 0 if not
 */

int testing(int num1, int num2)
{
	if (num2 < 2 || num2 % num1 == 0)
		return (0);
	else if (num1 > num2 / 2)
		return (1);
	else
		return (testing(num1 + 1, num2));
}

/**
 * is_prime_number - states if number is prime
 * @n: value to be checked
 * Return: value to returned
 */
int is_prime_number(int n)
{
	if (n == 2)
	return (1);
	return (testing(2, n));
}

