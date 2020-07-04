#!/usr/bin/python3
"""This module defines the island_perimeter function"""


def island_perimeter(grid):
    """Function to return the perimeter of an island"""

    counter = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if col == 1:
                try:
                    if grid[row][col - 1] == 0:
                        counter += 1
                    if grid[row + 1][col] == 0:
                        counter += 1
                except:
                    pass
    return (counter * 2)
