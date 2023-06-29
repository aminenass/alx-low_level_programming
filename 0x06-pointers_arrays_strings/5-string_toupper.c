#include "main.h"
/**
 * string_toupper - this function 
 * @z: is the parameter
 * Return: always sucess
 */
char *string_toupper(char *z)
{
	int x;

	x = 0;
	while (z[x] != '\0')
	{
		if (z[x] >= 'a' && z[x] <= 'z')
			z[x] = z[x] - 32;
		x++;
	}
	return (z);
}


