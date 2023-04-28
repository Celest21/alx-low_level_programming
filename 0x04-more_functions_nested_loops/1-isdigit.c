#include "main.h"

/**
  * _isdigit - checks for a digit 0-9
  * @c: character to be checked
  * Return: 1 if character is a digit or 0 if anything else
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}