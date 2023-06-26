#include "main.h"
/**
 * char_strcpy - this function that copies the string pointed to by src
 * @dest: first value
 * @src: second value
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int z = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; z < x; z++)
	{
		dest[z] = src[z];
	}
	dest[x] = '\0';
	return (dest);
}
