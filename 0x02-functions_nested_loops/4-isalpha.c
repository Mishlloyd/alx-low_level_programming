#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: the charachter in ASCII code
 * Return: 1 if its an alphabet. 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
