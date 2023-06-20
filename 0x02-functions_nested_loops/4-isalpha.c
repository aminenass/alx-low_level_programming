#include "main.h"
/**
* _isalpha - This is a func that check if alphabet
* @c: the parameter which represent the chari
* Return: if alphabet either lower || upper r 1 otherwise 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

