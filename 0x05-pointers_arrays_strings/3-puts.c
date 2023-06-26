#include "main.h"
/**
 * _puts - this function print string followed by line
 * @str: represent string
 */
void _puts(char *str)
{
	while (*str != '/0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
