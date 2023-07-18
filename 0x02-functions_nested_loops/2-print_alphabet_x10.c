#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times.
 * Description: 'prints alphabet 10 times.'
 * returns: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
