#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct define new dog
 * @name: 1 member
 * @owner: 2 member
 * @age: 3 member
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
#endif

#ifndef FUNC
#define FUNC
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
