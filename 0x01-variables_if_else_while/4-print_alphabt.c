#include <stdio.h>
/**
 * main print alphapet except q&e
 *
 * return always success 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	
	putchar('\n');
	return (0);
}

