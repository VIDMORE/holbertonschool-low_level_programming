#!/usr/bin/python3
"""This module defines the island_perimeter function"""


def island_perimeter(grid):
    """Function to return the perimeter of an island"""

    counter = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                if col == 0 or grid[row][col - 1] == 0:
                    counter += 1
                if row == len(grid) - 1 or grid[row + 1][col] == 0:
                    counter += 1
                if row == 0 or grid[row - 1][col] == 0:
                    counter += 1
                if col == (len(grid[row]) - 1) or grid[row][col + 1] == 0:
                    counter += 1
    return (counter)
