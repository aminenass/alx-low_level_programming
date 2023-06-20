#include "main.h"
/**
 * main - This is the preferred style for multi-line
 * comments in C source code.
 * Return - success 0
 */
void print_alphabet_x10(void)
{
	char alpha= 'a';
	n = 0;

	while (n <= 10 && alpha <= 'z')
	{
		_putchar(alpha);
		n++;
	}
	_putchar('\n');
}
