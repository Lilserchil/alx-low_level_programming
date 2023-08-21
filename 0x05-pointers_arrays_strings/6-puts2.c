#include "main.h"
/**
  * puts2 - prints all even numbers
  *@str: string input
  */

void puts2(char *str)
{
	while (*str != '\0')
	int count = 0;
	int i;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i += 2)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
