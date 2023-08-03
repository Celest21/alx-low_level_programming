#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string that has the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	/*variable to track index in string*/
	int i;
	/*variable to store decimal*/
	unsigned int decimal = 0;

	if (!b)
		/*if string pointer is NULL, return 0*/
		return (0);

	/*loop through characters until reaching NULL*/
	for (i = 0; b[i]; i++)
	{
		/*check if 0 or 1*/
		if (b[i] < '0' || b[i] > '1')
			/*return 0 if invalid character*/
			return (0);
		/*convert binary to decimal by adding and shifting*/
		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}

