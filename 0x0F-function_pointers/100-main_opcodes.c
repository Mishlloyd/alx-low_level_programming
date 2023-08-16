#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints the opcodes of this program
 * @a: addres of the main function
 * @n: number of bytes to ptint
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%,2hhx", a[i]);
				if (i < n - 1)
					printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes o its ownmain function
 * @argc: number of arguments passed to the function
 * @argv: array of pointrs to arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}

