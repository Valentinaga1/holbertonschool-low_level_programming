#include "dog.h"
#include "stdio.h"
/**
 * print_dog -  prints a struct dog
 * @d: puntero a la estructrua dog
 */
void print_dog(struct dog *d)
{
	if (d != '\0')
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	else if ((d->name == '\0') || (d->owner == '\0'))
	{
		printf("Name: (nil)\n");
		printf("Owner: (nil)\n");
	}
	
}
