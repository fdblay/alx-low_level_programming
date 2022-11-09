#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2-dimensional array with each element set to 0
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array or NULL if malloc fails||args < 1.
 */
int **alloc_grid(int width, int height)
{
	int **matrix, row, column;

	if (width < 1 || height < 1)
		return (NULL);

	matrix = (int **) malloc(sizeof(int *) * height);

	if (!matrix)
		return (NULL);

	for (row = 0; row < height; ++row)
	{
		matrix[row] = (int *) malloc(sizeof(int) * width);

		if (!matrix[row])
		{
			while (--row > -1)
				free(matrix[row]);
			free(matrix);
			return (NULL);
		}

		for (column = 0; column < width; ++column)
			matrix[row][column] = 0;
	}

	return (matrix);
}
