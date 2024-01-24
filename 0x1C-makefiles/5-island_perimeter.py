#!/usr/bin/python3

"""
function to create an island from
a grid
"""


def island_perimeter(grid):
    """
    calculates perimeter of an island
    """

    perimeter = 0
    area = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                area += 1

                if x > 0 and grid[x][y - 1] == 1:
                    perimeter += 1
                if x > 0 and grid[x - 1][y] == 1:
                    perimeter += 1

    return area * 4 - perimeter * 2


if __name__ == "__main__":
    main()
