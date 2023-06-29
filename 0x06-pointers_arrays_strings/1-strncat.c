#include "main.h"
/**
 * _strncat - second function conce two string
 * @dest: first input
 * @src: second input
 * @n: third
 * Return: always success dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int first;
	int second;

	first = 0;
	while (dest[first] != '\0')
	{
		first++;
	}
	second = 0;
	while (second < n && src[second] != '\0')
	{
	dest[first] = src[second];
	first++;
	second++;
	}
	dest[first] = '\0';
	return (dest);
}

