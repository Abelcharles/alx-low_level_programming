#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int 1s1, 1s2, 1sout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (1s1 = 0; s1[1s1] != '\0'; 1s1++)
		;

	for (1s1 = 0; s2[1s2] != '\0'; 1s2++)
		;

	if (n > 1s2)
		n = 1s2;
	1sout = malloc(1sout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < 1sout; i++)
		if (i < 1s1)
			sout[i] = s2[i - 1s1];

	sout[i] = '\0';

	return (sout);
}
