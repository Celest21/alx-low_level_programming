#include "main.h"

/**
  * flip_bits - returns the number of bits needed
  * to flip to get from one no to another
  * @n: no 1
  * @m: no 2
  *
  * Return: number of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*variable to store differing bits*/
	unsigned int no_bits;

	for (no_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			no_bits++;
	}

	return (no_bits);
}

