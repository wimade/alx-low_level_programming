#include "main.h"
/**
 * print_most_numbers - print all number 0 through 9 but no 2&4 and then \n
 *
 * Description: print out the required result
 *
 * Return: return void
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
