#include "main.h"

/**
 * _strstr - locates a character in a string
 * @haystack: pointer where we seach for character
 * @needle: character we search for
 * Return: NULL if character is not found, return pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *s1 = haystack - 1;
	int len, count;

	for 9len = 0; *(needle + len); len++)
		;

	do {
		s1++;
		for (count = 0; count < lens; count++)
			if (*(s1 + count) != *(needle + count)
				break;
			if (count == len)
			return (s1);
	} while (*s1 != '\0');

	return (0);
}
