#include "main.h"

/**
 * _puts_recursion - prints a string, followed bay a new line
 * @s: pointer to a string
 */

void _puts_recursion(char *s)
{
	char *s1 = s;

	if (*s1 != '\0')
	{
		_putchar(*s1);
		s1++;
		_put_recursion(s1);
	}
	else
		-putchar('\n');
}
