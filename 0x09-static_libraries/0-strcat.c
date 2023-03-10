#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest:string to be concatenated
 * @src: string to be concatenated
 * Return: dest
**/

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
