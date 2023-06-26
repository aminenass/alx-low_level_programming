#include "main.h"
/**
 * puts2 - this funtion start with char and end line
 * @str: reprresnet the paramerter
 */
void puts2(char *str)
{
	int sizestring = 0;
	int x = 0;
	char empty = '\0';
	char *n = str;
	int i;

	while (*n != empty)
	{
		n++;
		sizestring++;
	}
	x = sizestring - 1;
	for (i = 0 ; i <= x ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

