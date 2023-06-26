#include "main.h"
/**
 * swap_int - swap int 
 * @a: first numb
 * @b: second numb
 * Return: always success
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
