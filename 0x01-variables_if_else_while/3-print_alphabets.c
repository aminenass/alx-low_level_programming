#include <stdio.h>
/**
 * main - Prints the alphabetupperlower.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter_lo = 'a';
	char letter_up = 'A';

	while (letter_lo <= 'z')
	{
		putchar(letter_lo);
		letter_lo++;
	}
	while (letter_up <= 'Z')
	{
		putchar(letter_up);
		letter_up++;
	}

	putchar('\n');
	return (0);
}
