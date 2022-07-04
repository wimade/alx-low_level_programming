#include "main.h"
#include <stdio.h>

/**
 * print_dis=agsums - add diagonal lines of a square matrix
 * @a: square matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int lfrg = 0, rglf = size - 1;
	int valuefrg = 0, valueglf = 0;
	int *p = a;

	for (; lfrg <= size * size; lfrg += (size + 1), rglf += (size - 1))
	{
		valuelfrg += *(p + lfrg);
		valuerglf += *(p + rglf);
	}
	printf("%d, %d\n", valuelfrg, valuerglf);
}