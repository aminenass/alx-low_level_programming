#include "main.h"
/**
 * more_numbers - this function print list of numb
 * Return - return the number
 */
void more_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j++;
	}
}
