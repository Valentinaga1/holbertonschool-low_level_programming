#include "dog.h"
#include "stdio.h"
/**
 * print_dog -  prints a struct dog
 * @d: puntero a la estructrua dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
