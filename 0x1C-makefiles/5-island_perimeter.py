#!/usr/bin/python3
"""This is island_perimeter module"""


def island_perimeter(grid):
    """Define and Returns the perimeter of the island described in grid"""
    c = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for a, i in enumerate(grid):
        for b, n in enumerate(i):
            if n == 1:
                if a == 0 or grid[a - 1][b] != 1:
                    c += 1
                if b == 0 or grid[a][b - 1] != 1:
                    c += 1
                if b == width or grid[a][b + 1] != 1:
                    c += 1
                if a == length or grid[a + 1][b] != 1:
                    c += 1
    return c
