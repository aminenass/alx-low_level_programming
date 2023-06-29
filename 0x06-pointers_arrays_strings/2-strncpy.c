#include "main.h"
/**
 * _strncpy - third function
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: always success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int first;

	first = 0;
	while (first < n && src[first] != '\0')
	{
		dest[first] = src[first];
		first++;
	}
	while (first < n)
	{
		dest[first] = '\0';
		first++;
	}
	return (dest);
}
