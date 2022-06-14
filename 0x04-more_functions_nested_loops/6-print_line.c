#include "main.h"
/**
 * print_line - print a straight line using putchar of n size
 * @n: size of line
 *
 * Description: print out the required result
 *
 * Return: return void
 */
void print_line(int n)
{
	for (; n > 0; n--)
		-putchar('_');
	_putchar('\n');
}
