#include "main.h"
/**
 * print_numbers - this function print number followed by line
 * Return : return the nmbers
 */
void print_numbers(void)
{
	int i;

	for (i = 0 , i < 10 , i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
