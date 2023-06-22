#include "main.h"
/**
 * print_diagonal - diagonal printing 
 * @n: parameter of how many time
 * Return: return the diagonal
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < n; i++)
		{
			for (b = 0; b < n; b++)
			{
				if (a == b)
				{
					_putchar('\\');
				}
				else if (a > b)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
