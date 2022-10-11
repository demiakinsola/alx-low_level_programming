#ifndef DOG_H
#define DOG_H

/**
* struct dog - Name of structure.
* @name: Member field parameter.
* @age: Member field parameter.
* @owner: Member field parameter.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* #define DOG_H */
