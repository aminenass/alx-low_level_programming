#include "main.h"
/**
 * _strcat - this function conc two string
 * @dest: first input
 * @src: second valude
 * Return: always success
 */
char *_strcat(char *dest, char *src)
{
	int first;
	int second;

	first = 0;
	while (dest[first] != '\0')
	{
		first++;
	}
	second = 0;
	while (src[second] != '\0')
	{
		dest[first] = src[second];
		first++;
		second++;
	}
	dest[first] = '\0';
	return (dest);
}
