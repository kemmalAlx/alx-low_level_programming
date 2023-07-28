#include <stdio.h>

/**
 * after_main - function that runs before main
*/

void __attribute__ ((constructor)) after_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
