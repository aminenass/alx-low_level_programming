#include "main.h"
/**
 * print_alphabet_x10 - This is a function print alphabet 10x
 *
 * Return - success 0
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int n = 0;

	while (n <= 10 && alpha <= 'z')
	{
		_putchar(alpha);
		n++ , alpha++ ;
		
	}
	_putchar('\n');
}
