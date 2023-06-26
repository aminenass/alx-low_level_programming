#include "main.h"
/**
 * rev_string - the function rev string
 * @s: the parameter
 */
void rev_string(char *s)
{
	int x;
	char begin = s[0];
	int score = 0;
	char empty = '\0';

	while (s[score] != empty)
	score++;
	for (x = 0; x < score; x++)
	{
		score--;
		begin = s[x];
		s[x] = s[score];
		s[score] = begin;
	}
}
