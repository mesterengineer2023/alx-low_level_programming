#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **abc;
int q, w;
if (width <= 0 || height <= 0)
return (NULL);
abc = malloc(sizeof(int *) * height);
if (abc == NULL)
return (NULL);
for (q = 0; q < height; q++)
{
abc[q] = malloc(sizeof(int) * width);
if (abc[q] == NULL)
{
for (; q >= 0; q--)
free(abc[q]);
free(abc);
return (NULL);
}
}
for (q = 0; q < height; q++)
{
for (w = 0; w < width; w++)
	abc[q][w] = 0;
}
return (abc);
}
