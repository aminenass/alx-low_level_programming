#include "main.h"
/**
 * main - print_alphabet from func .
 * Description:  A lower case alphabet is printed,
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
