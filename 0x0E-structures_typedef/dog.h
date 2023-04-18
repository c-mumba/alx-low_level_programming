#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Defines metadata about the dog and type of dog's struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Other function prototypes */

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
