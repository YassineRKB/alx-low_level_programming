#!/usr/bin/python3
"""Island Perimeter Module"""


def island_perimeter(grid):
    """Funtionc to calculate the perimeter of grid where "1" is found"""
    perimeter = 0
    grlen = len(grid)
    grlenRow = len(grid[0])
    for row in range(grlen):
        for col in range(grlenRow):
            if grid[row][col] == 1:
                if col == (grlenRow - 1) or grid[row][col + 1] == 0:
                    perimeter += 1
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == (grlen - 1) or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
    return perimeter
