#include "main.h"

/**
 * factorial - a function that return a factorial of a number
 * @n: number to rwturn a factoral from
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));

}
