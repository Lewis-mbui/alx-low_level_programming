#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - contains details for dogs
 * @name: name of a dog
 * @age: age of a dog
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
