#include "main.h"

/**
 * swap_int - swap two numbers
 *
 * @a: first input
 * @b: second input
*/


void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
