#include "main.h"
/**
 * _isdigit - this check diit 0 through 9
 * @c: parameter digit
 * Return: return 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
