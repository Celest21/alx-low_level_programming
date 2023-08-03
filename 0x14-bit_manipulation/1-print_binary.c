#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	/*keep track of bit*/
	int i, count = 0;
	/*store bit*/
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		/*shift right to get current bit*/
		current = n >> i;

		/*check if bit is 1*/
		if (current & 1)
		{
			/*print 1*/
			_putchar('1');
			/*increment*/
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

