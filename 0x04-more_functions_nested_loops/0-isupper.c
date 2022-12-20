#include "main.h"

/**
 * _isupper - prints function checks for uppercase character
 * @c: character to check
 * Return: Always return success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
