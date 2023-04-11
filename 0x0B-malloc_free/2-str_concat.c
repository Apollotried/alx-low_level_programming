#include <string.h>
/**
 * str_concat - entry
 * @s1: first string
 * @s2: second string
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
char *result;
size_t i;
size_t j;
size_t one;
size_t two;

if (s1 == NULL)
{
s1 = "";
};
if (s2 == NULL)
{
s2 = "";
};
one = strlen(s1);
two = strlen(s2);

result = (char *)malloc(one + two + 1);

if (!result)
{
return (NULL);
};
for (i = 0 ; i < one ; i++)
result[i] = s1[i];
for (j = 0 ; j < two ; j++)
result[i + j] = s2[j];
result[one + two] = '\0';

return (result);
}
