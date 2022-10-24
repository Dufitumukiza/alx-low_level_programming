#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that print half of a string
 * of odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int n, m, len;

	len = 0;

	for (n = 0; str[n] != '\0';  n++)
		len++;

	m = (len / 2);

	if ((len % 2) == 1)
		m = ((len + 1) / 2);

	for (n = m; str[n] != '\0'; n++)
		putchar(str[n]);
	putchar('\n');
}
