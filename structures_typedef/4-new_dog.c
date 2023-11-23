#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplicates a string
 * @str: input string
 *
 * Return: pointer to the newly allocated duplicated string
 *         or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
char *dup;
int i, len = 0;
if (str == NULL)
return (NULL);
/* Calculate the length of the input string */
while (str[len] != '\0')
len++;
/* Allocate memory for the duplicated string */
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
/* Copy the characters from the input string to the duplicated string */
for (i = 0; i < len; i++)
dup[i] = str[i];
/* Null-terminate the duplicated string */
dup[len] = '\0';
return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog_t struct
 *         or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
/* Allocate memory for the new dog_t struct */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
/* Allocate memory for the name string */
new_dog->name = _strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
/* Allocate memory for the owner string */
new_dog->owner = _strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
new_dog->age = age;
return (new_dog);
}
