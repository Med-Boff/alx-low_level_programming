#ifndef DOG_H

#define DOG_H

/**
 * struct dog - type struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
