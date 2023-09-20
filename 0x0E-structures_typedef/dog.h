#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Structure to keep dog's data
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: structure used save a dog data
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif
