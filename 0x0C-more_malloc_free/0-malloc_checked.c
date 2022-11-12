#include "main.h"
/**
 *malloc_checked - allocates memory using malloc, exit(98) if it fails
 *@b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */

int void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
