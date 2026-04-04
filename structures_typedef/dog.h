#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: Longer description of the struct dog in the memory
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* أضف هذا السطر هنا (الـ Prototype) */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
