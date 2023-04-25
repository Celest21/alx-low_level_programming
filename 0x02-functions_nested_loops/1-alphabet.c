#include "main.h"
/**
  * print_alphabet - prints the alphabet in lowercase
  * Return: always 0
  */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
