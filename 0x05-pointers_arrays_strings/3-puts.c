#include "main.h"
/**
 * _puts - this function print string followed by line
 * @str: represent string
 */
void _puts(char *str)
{
	char empty = '\0';
	while (*str != empty)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
