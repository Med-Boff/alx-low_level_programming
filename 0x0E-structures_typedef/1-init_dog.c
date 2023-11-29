#include <stdlib.h>
#include <dog.h>
/**
 * init_dog - function that inicialixze a var of type struct dog
 * @d: pointer
 * @name: var name
 * @age: var age
 * @owner: var owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
