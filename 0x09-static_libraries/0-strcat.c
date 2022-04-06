#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
i++;
while (dest[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
