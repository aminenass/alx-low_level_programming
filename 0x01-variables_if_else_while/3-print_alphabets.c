#include <stdio.h>
/**
 * main - Prints the alphabetupperlower.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char letter = 'a';
	char letter = 'A';

        while (letter <= 'z')
        {
                putchar(letter);
                letter++;
        }
	while (letter <= 'Z')
        {
                putchar(letter);
                letter++;
        }

        putchar('\n');
        return (0);
}
