#include "main.h"
/**
 * _strlen - this function return the lenght of string
 * @s: the string
 * Return: the value 
 */
int _strlen(char *s)
{
	int stringsize = 0;

	while (*s != '\0')
	{
		s++;
		stringsize++;
	}
	return (stringsize);
}
		


