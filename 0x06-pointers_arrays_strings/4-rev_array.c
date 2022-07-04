#include "main.h"
/**
 * reverse_array - reverse the element in array
 * @a: array
 * An: size of the element of the array in bytes
 *
 * Description: return the required result
 *
 * Return: return void
 */
void reserse_array(int *a, int n)
{
	int i = 0;
	int val;

	for (i = 0; i < n--; i++)
	{
		val = a[i];
		a[i] = a[n];
		a[n] = val;
	}

}
