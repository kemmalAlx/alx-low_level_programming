#include "main.h"

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n -= 1;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
		i++; 
	}
}
