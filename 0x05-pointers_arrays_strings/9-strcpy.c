#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the destination array
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (*(src + len) != '\0')
		len++;

	for (; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[len] = '\0';
	return (dest);
}
