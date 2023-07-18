#include "dog.h"

/**
 * print_dog - print dog
 *
 * @d: pointer to struct dog
 *
 * Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? printf("Name: %s\n" , d->name) : puts("Name: (nil)");
		printf("Age: %f\n", d->age);
		d->owner ? printf("Owner: %s\n", d->owner) : puts("Owner: (nil)");
	}
}
