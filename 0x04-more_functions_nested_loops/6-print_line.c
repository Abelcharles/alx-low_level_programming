#include "main.h"

/**
 * print_line - drws a straight line
 * @n: number of times _ should be printed
 */

void printed_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
