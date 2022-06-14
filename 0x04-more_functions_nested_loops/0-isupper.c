#include "main.h"
/**
 * _isupper - checks if the argument is upper case
 * @c: Argument passed to the function
 *
 * Description: print out the required result
 *
 * Return: if integer value 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
