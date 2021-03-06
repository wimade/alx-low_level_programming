#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: character to be checked
 * Return: if seperator return 1. Otherwise return 0;
 */
char *leet(char *str)
{
	/*Declaring variables*/
	int count = 0, x = 0;
	char *letters = "aeotlAEOTL";
	char *num = "4307143071";

	/*Start WHILE*/
	while (str[count] != '\0')
	{
		x = 0;
		while (letters[x] != '\0') /*Evaluate all cases*/
		{
			if (str[count] == letters[x]) /*Match between string a letters*/
				str[count] = nums[x];
			x++;
		}
		count++; /*Add count*/
	} /*End WHILE*/

	return (str);
}
