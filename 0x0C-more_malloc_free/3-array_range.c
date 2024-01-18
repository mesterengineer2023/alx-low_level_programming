#include "main.h"
/**
 * array_range -  function that creates an array of integers.
 * @min: number start from min
 * @max: max number to end
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int z;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (z = 0; z <= max - min; z++)
	{
		ptr[z] = min + z;
	}
	return (ptr);
}

