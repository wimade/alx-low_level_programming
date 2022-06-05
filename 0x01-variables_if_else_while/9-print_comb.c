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
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0'));
		if (num < 9)
		{
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
