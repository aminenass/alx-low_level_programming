#include "main.h"
/* _isupper - this function checck if digit
 *@c: the digit
 * Return: if digit return 1 otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
