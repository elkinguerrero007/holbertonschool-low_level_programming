#ifndef DOG_H
#define DOG_H

/**
 * struct dog - check the code
 *@name: Name of dog
 *@owner:name_own
 *@age:age
 *@name:name
 *Description: is a structure representation of Dog
 */

{
char *name;
float  age;
char *owner;
} my_dog;

typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog

#endif
