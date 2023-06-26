#include "main.h"
/**
 * print_rev - this func print string in reverse
 * @s: represent the string
 */
void print_rev(char *s)
{
	int o;
	int stringsize = 0;
	char empty = '\0';

	while (*s != empty)
	{
		stringsize++;
		s++;
	}
	s--;
	for (o = stringsize; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
