#include "main.h"

/**
 * _isdigit - check for a digit (0 through 9)
 * @c: digit checked
 *
 * Description: print out the required result
 *
 * Return: 1 if c is a digit return 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
