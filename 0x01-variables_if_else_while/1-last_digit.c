#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
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
	if (lastnum > 5)
	{
		printf("\"last digits of %d is %d and is greater than 5", n, lastnum);
	}
	else if (lastnum == 0)
	{
		printf("\"last digits of %d is %d and is 5", n, lastnum);
	}
	else if (lastnum < 6 && lastnum != 0)
	{
		printf("\"last digit of %d is %d and is less than 6 and not 0", n, lastnum);
	}
	return (0);
}