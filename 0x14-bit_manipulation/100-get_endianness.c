#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	/*variable that stores value for endianness check*/
	unsigned int g;
	/*pointer to char*/
	char *c;

	/*initialising variable*/
	g = 1;
	/*points to the address of g*/
	c = (char *) &g;

	return ((int)*c);
}

