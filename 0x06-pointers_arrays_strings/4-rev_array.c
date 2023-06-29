#include "main.h"
/**
 * reverse_array - this function reverse the numb
 * @a: number in arr
 * @n: number of element in array
 * Return: always success and reverse the 
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
