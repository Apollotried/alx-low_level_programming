#include "main.h"
#include <string.h>
/**
 * _strstr - locates a sub string
 * @haystack: the string to search
 * @needle: the substring to locate
 * Return: char*
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
