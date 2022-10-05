<<<<<<< HEAD
 #include "main.h"
=======
#include "main.h"
>>>>>>> 1059585388273e21623a35cc072c5e50b70fe317

/**
 * _memcpy - copies memory area
 *
 * @dest: copy destination
 * @src: copy source
 * @n: bytes of memory to copy
 * Return: pointer to modified string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
