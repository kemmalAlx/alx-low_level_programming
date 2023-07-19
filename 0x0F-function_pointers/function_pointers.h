#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));


#endif