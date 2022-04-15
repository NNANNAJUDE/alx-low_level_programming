#include "main.h"

/**
 * _isupper - function that verifies if a character is an uppercase
 * @c: tested character
 * Return: 1 if successful or 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'g')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
