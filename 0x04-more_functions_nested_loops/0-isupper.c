#include "main.h"
/**
 * _isupper - check for uppercase letters
 * @c: The character in ASCII code
 * Return: 1 for upper case and 0 for others.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
