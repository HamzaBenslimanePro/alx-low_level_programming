#ifndef dog_h
#define dog_h

/**
 * struct dog - blabla
 * @name: a parameter
 * @age: another parameter
 * @owner: yet anoteher parameter
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog_t dog dog;
dog_t dog
{
        char *name;
        float age;
        char *owner;
};

#endif
