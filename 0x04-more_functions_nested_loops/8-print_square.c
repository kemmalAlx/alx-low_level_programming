#include"main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int row = 1, column = 1;

	while (row <= size)
	{
		column = 1;
		while (column <= size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}
}
