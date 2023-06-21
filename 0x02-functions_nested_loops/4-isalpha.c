#include "main.h"

/**
 * _isalpha - function to check if
 *           character is lowercase or uppercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is lowercase or uppercase
 *         otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
