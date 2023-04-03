#iinclude "main.h"
/**
 * _memcpy - memcpy function
 * @dest: dest
 * @src: src
 * @n: n
 * Return: Description of the returned value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	return (dest);
}
