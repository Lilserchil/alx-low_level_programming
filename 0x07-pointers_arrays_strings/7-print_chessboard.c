#include "main.h"

/**
  *_strchr - find a character in a string
  *@s: string
  *@c: charcter
  *Return: string
  */

char *_strchr(char *s, char c)
{
	int i, j, k;
	int i;

	/* length of string */
	i = 0;
	while (s[i] != '\0')
	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
		if (s[i] == c)
			return (s + i);
	}
	for (j = 0; j < i; j++)
	if (s[i] == c)
	{
		if (s[j] == c)
		{
			for (k = j, k < i; k++)
			{
				s[k] = s[i];
			}
			return (s);
		}
		else
			return (NULL);
		return (s + i);
	}


	else
		return ('\0');
}
