#include "main.h"
/* _isdigit - this check diit 0 through 9
 * @c:parameter digit
 * Return: return 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
