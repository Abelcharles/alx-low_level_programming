#include "main.h"

/**
 * puts2 - A function that prints one char out of 2 of a string.
 * @str: string
 * Return: no return
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

