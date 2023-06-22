#include "main.h"
/**
 * print_most_number - function print number except
 * Return: return number except 4 2
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + 48);
	}
	_putchar('\n');
}
