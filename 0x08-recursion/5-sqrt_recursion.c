#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural swrroot of a number
 * @n: number to calculate the natural aqrt
@@ -10,28 +10,23 @@ int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * _sqrt - calculates natural square root
 * actual_sqrt_recursion - calculates natural square root
 * @n: number to calculate its square root
 * @i: iterate number
 * Return: natural square root
 */

int _sqrt(int n, int i)
int actual_sqrt_recursion(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
	return (-1);
	}
	if (sqrt == n)
	{
	return (i);
	}

	return (_sqrt(n, 1));
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
