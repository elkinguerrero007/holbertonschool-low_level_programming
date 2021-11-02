#ifndef DOG_H
#define DOG_H

/**
 * struct dog - check the code
 *@name: Name of dog
 *@owner:name_own
 *@age:age
 *@name:name
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
char *name;
float  age;
char *owner;
} my_dog;
#endif
