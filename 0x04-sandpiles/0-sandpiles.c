#include "sandpiles.h"
/**
 * p - Prints a grid.
 * @grid: Grid to be printed.
 * Return: Nothing.
 */
void p(int grid[3][3])
{
  int i, j;

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  if (j)
	    printf(" ");
	  printf("%d", grid[i][j]);
	}
      printf("\n");
    }
}
