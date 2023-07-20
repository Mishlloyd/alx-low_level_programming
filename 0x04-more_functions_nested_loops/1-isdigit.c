#include "main.h"
/**
 * _isdigit - check for lowercase
 * @c: The character in ASCII code
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
