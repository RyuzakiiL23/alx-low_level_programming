#ifndef DOG_H
#define DOG_H

/*got_t - typedef for strcut dog*/
typedef struct dog got_t;

/**
	* struct dog - stores dogs informations
	* @name : stores dog's name
	* @age : stores dog's age
	* @owner : stores dog's owner's name
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
