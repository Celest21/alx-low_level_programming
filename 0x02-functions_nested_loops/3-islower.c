#include "main.h"
/**
  * _islower - checks if a character is lowercase
  * @c: the character that needs to be checked
  * Return: 1 if character is lowercase, otherwise 0
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
