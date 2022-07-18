#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates n array of integers
 * @min: minimun range of vaue stored
 * @max: maximum range of value stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *array;
	int a, b;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);
	for (a = min, b = 0; a <= max; a++, b++)
	{
		*(array + b) = a;
	}
	return (array);
}
