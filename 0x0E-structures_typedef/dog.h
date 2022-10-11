#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure definition of a dog
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog
{
	char *name;
	char age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *dog);
#endif
