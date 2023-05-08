#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: matrix of integers
 * @size: size of matrix
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int y, sum1 = 0, sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 += a[y];
		a += size;
	}

	a -= size;

	for (y = 0; y < size; y++)
	{
		sum2 += a[y];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
