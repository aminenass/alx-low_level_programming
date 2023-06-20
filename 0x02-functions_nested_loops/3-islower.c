#include "main.h"
/**
* _islower - This code check if lower case or not
* @c: represent the alpha to check
* Return: 1 is lower and otherwise 0
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
