#include "main.h"
/**
 * main - Prints alphabet from func .
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	char alpha = 'a';

	while ( alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}