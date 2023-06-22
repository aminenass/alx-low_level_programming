#include "main.h"
/**
 * print_line - this function draw straing line
 * @n: reprsent the parameter num
 * Return: draw line
 */
void print_line(int n)
{
	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		int line;

		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

