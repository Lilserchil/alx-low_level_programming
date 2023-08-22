#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints random password
 * Return: Always 0
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		asswor[index] = 33 + rand() % 94;
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
