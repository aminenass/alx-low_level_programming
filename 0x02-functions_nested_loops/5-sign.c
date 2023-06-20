#include "main.h"
/**
 * int print_sign - this function prints the sign of a number.
 * @n : the paramether as signal
 * Return : 1 and + if n >0 otherwise -1 - or 0 if n ==0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else 
	{
		return (-1);
	}
}	 
