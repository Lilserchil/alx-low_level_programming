#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a randomly generated number 
 *and whether is greater than 5, less than 6, 0r 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastnum;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;

	if (n % 10 > 5)
	{
		printf("Last digits of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10) < 6 && (n % 10) != 0
	{
		printf("Last digits of %d is %d and less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n%10);
	}
	return (0);
}
