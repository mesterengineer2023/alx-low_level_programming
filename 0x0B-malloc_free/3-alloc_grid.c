#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width
* @height: height
* Return: pointer of 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **aloc;
int n, p;
if (width <= 0 || height <= 0)
return (NULL);
aloc = malloc(sizeof(int *) * height);
if (aloc == NULL)
return (NULL);
for (n = 0; n < height; n++)
{
aloc[n] = malloc(sizeof(int) * width);
if (aloc[n] == NULL)
{
for (; n >= 0; n--)
free(aloc[n]);
free(aloc);
return (NULL);
}
}
for (n = 0; n < height; n++)
{
for (p = 0; p < width; p++)
aloc[n][p] = 0;
}
return (aloc);
}
