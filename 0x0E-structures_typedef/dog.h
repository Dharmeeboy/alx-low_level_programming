#ifndef DOG_H
#define DOG_H
/**
 * struct dog - my dog data type
 * @name: the name of the dog which is an array
 * @age: the age of the dog which is an integer
 * @owner: The owner of the dog which is an char array
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
