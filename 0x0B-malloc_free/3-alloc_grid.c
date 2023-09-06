#include "main.h"
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return:
 */
int print_grid(int **grid, int width, int height)

{	
	int j = 0;
	int n = 0;

	
    if (width <= 0 || height <= 0) {
        return (NULL);
    }

    
    int **grid = malloc(height * sizeof(int *));
    if (grid == NULL) {
        return (NULL); 
    }

    
    for (; j < height; j++) {
        grid[j] = malloc(width * sizeof(int));
        if (grid[j] == NULL) {
            
            for (; n < j; n++) {
                free(grid[n]);
            }
            free(grid);
            return (NULL);
        }

        
        for (int n = 0; n < width; n++) {
            grid[j][n] = 0;
        }
    }

    return (grid);
}


