#include "main.h"

/**
  */
* *cap_string - a function that capitalizes all words of a string
* @str: string
* Return: string
**/

char *cap_string(char *value)
char *cap_string(char *str)
{
	int size = sizeof(value) - 1;
	int i;
	int i = 1;

	for (i = 0; i <= size; i++)
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	while (str[i] != '\0')
	{
		if (value[i] == '.' && value[i + 1] == ' ')
		{
			value[i + 2] = value[i + 2] - 32;
		}
		else if (value[i] == ' ')
		if ((str[i - 1] == ' ' || str[i - 1] == '\t'
		     || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';'
		     || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
		     || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
		     || str[i - 1] == '{' || str[i - 1] == '}')
		     && (str[i] >= 'a' && str[i] <= 'z'))
		{
			value[i + 1] = value[i + 1] - 32;
			str[i] = str[i] - 32;
		}
		else if ((value[i] == '\\' && value[i + 1] == 'n') || (value[i] == '\\' && value    [i + 1] == 't'))
				value[i + 2] = value[i + 2] - 32;

		i++;
	}
	return (value);
	return (str);
}
