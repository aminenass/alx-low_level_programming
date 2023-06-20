#include "main.h"
/**
* print_lat_digit - this is function which print last digit of numb
* @n: parameter which is number
* Return: the number of last digit
*/
int print_last_digit(int n)
{
	int i;
	
	if(n <0)
	{
		n = -n;
	}
	i= n % 10

	if(i < 0)
	{
		i = -i;
	}
	_putchar(i + '0');
	return (i);
}
