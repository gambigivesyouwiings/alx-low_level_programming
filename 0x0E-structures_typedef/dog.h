#include <stddef.h>
#ifndef DOGGIE_H
#define DOGGIE_H

/**
* struct dog - contains dog information
* @name:  name of dog
* @age: age of the dog
* @owner: owner of the dog
* Description: Hods all needed data
*/
struct dog
{
	char *name;
	float *age;
	char *owner;
}
typedef struct dog dog_t;
#endif /*DOGGIE_h/
