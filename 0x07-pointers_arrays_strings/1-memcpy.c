#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory to be stored in
 * @src: memory that is copied from
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int j;
j = n;
for (i = 0; i < j; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
