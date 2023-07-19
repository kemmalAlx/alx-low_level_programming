#include "function_pointers.h"
/**
 * array_iterator -  a function that executes a function
 * given as a parameter on each element of an array.
 * 
 * @array: array of int
 * @size: size of array
 * @action: pointer of a function
 * 
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t len = 0;

	if (size <= 0)
		exit(0);
	while (len != size)
	{
		action(array[len]);
		len++;
	}
}
