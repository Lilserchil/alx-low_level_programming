#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
