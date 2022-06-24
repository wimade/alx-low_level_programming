#include "main.h"
/**
 * _strlen - return lenght of a string
 * * @s: argument to function
 *
 * Description: return the required result
 *
 * Return: return integer value
 *
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
