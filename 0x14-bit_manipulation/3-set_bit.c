#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		/*if the index is not in range return -1*/
		return (-1);

	/*set to a given index*/
	*n = ((1UL << index) | *n);
	/*returns 1 to show it is successful*/
	return (1);
}

