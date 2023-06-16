#include <stdio.h>
/**
 * main - Putchar the num and ,.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int number;

        for (number = 0; number < 10; number++)
        {
		if (number != 9)
		{
			putchar("%d, ", number);
		}
		else
		{
			putchar("%d", number);
		}
        }
        putchar('\n');
        return (0);
}
