#include "main.h"
/**
 * print_alphabet - print_alphabet from func .
 * Return: Always 0 (Success)
 * This function prints all the lowercase alphabets from 'a' to 'z'.
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
