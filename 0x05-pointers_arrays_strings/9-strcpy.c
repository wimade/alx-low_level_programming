#include "main.h"
/**
 * _strcpy - update value.
 * @dest: value to be evaluate.
 * @src: value to be evaluate.
 * Return: not.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
