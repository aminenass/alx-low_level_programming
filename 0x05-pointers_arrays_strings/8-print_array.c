#include "main.h"
/**
 * print_array - this function  print element in array followed by line
 * @a: the first parameter the numb in
 *@n: number of element in array
 */
void print_array(int *a, int n)
{
	int x;
	int z = (n - 1);

	for (x = 0; x < z; x++)
	{
		printf("%d, ", a[x]);
	}
		if (x == z)
		{
			printf("%d", a[z]);
		}
		printf("\n");
}
