#include "main.h"

/**
 * print_number - print all numbers 0 through 9 and then new line
 *
 * Description: print out the required result
 *
 * Return: return void
 *
 */

void print_number(void)
{
	 int i;

	 for (i = '0'; i <= '9'; i++)
	 {
		 _putchar(i);
	 }
	 _putchar('\n');
}
