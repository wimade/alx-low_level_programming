#include <stdio.h>
/**
 * main- print out the result from the function
 *
 * Description: use to print number from 0 to 9
 *
 * Return: return integer value o
 *
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
