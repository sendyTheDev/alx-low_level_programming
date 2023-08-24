#!/usr/bin/python3
"""island perimeter finding function."""


def island_perimeter(grid):
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for j in range(height):
        for k in range(width):
            if grid[j][k] == 1:
                size += 1
                if (k> 0 and grid[j][k - 1] == 1):
                    edges += 1
                 if (j > 0 and grid[j - 1][k] == 1):
                     edges += 1
    return size * 4 - edges * 2
