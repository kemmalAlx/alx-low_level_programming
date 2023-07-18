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
		d->name ? puts(d->name) : puts("Name: (nil)");
		printf("%f\n", d->age);
		d->owner ? puts(d->owner) : puts("Owner: (nil)");
	}
}
