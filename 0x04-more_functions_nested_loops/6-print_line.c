#include "main.h"

/**
 * print_line - draws a straigth line
 * @n: number of times _ should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
