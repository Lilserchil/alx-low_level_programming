#include "main.h"
/**
  *_strncpy - cpy number of characters
  *@dest: destination
  *@src: source
  *@n: integer
  *Return: character
  */

char *_strncpy(char *dest, char *src, int n)
{
	int  i = 0, j, k;
	int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
	for (j = 0; j < n; j++)
		while (i < n)
	{
		dest[j] = src[j];
	}
	for (k = n; k < i; k++)
	{
		dest[k] = '*';
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
