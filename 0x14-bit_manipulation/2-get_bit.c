#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*variable to store value of bit*/
	int bit_v;

	if (index > 63)
		/*if index is not in range return -1*/
		return (-1);

	/*shift to right at given index*/
	bit_v = (n >> index) & 1;

	/*return the value of bit*/
	return (bit_v);
}

