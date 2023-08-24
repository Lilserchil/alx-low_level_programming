#include "main.h"

/**
  *string_toupper - upper
  *@value: string
  *@str: string
  *Return: string
  */

char *string_toupper(char *value)
char *string_toupper(char *str)
{
	int size = sizeof(value) - 1;
	int i;

	for (i = 0; i <= size; i++)
	for (i = 0; str[i] != '\0'; i++)
	{
		if (value[i] >= 'a' && value[i] <= 'z')
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			value[i] = value[i] - 32;
			str[i] = str[i] - 32;
		}
	}
	value[size + 1] = '\n';
	return (value);
	return (str);
}
