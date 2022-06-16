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
	int i;

	for (i = 0; i <  n; i++);
	{
		if (n > 0)
		{
			_putchar('_');
		} else if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
