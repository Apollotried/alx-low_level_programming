#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
* _strlen - Finds the length of a string.
* @str: The string to be measured.
*
* Return: The length of the string.
*/

int _strlen(char *str)
{
	while (*str++)
	len++;
	return (len);
}
/**
* _strcopy - Copies a string pointed to by src, including the
*            terminating null byte, to a buffer pointed to by dest.
* @dest: The buffer storing the string copy.
* @src: The source string.
*
* Return: The pointer to dest.
*/

char *_strcopy(char *dest, char *src)
{
int i = 0;

for (i = 0 ; src[i] ; i++)
	dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
* new_dog - Creates a new dog.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: The new struct dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *akam;

if (name == NULL || age < 0 || owner == NULL)
	return (NULL);
akam = malloc(sizeof(dog_t));

if (akam == NULL)
	return (NULL);

akam->name = malloc(_strlen(name) + 1);

if (akam->name == NULL)
{
	free(akam);
	return (NULL);
}

akam->owner = malloc(_strlen(owner) + 1);

if (akam->owner == NULL)
{
	free(akam->name);
	free(akam);
	return (NULL);
}
akam->name = _strcopy(akam->name, name);
akam->age = age;
akam->owner = _strcopy(akam->owner, owner);

return (akam);
}
