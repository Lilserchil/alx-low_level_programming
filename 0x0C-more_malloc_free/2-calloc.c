#include "main.h"

/**
 * _calloc - allocating memory to an array using calloc
 * @nmemb: number of array number
 * @size: size of array
 * Return: pointer to a newly located memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);

	if (output == NULL)
		return (NULL);

	else
		return (output);

}
