#include "main.h"
/**
 * print_alphabet_x10 - This is a function print alphabet 10x
 *
 * Return - success 0
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while ( n<=10 )
	{
		char alpha = 'a';

		while ( alpha <= 'z')
		{
			_putchar(alpha);
			alpha++ ;
		}
		_putchar('\n');
		n++ ;
	}
}
