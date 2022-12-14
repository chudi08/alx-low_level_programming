#include "main.h"
/**
 * _isalpha - print a letter, upper or lowercase
 * @c: character checks
 * Return: 1 if c is a letter, upper or lowercase
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
