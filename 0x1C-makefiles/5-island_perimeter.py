#!/usr/bin/python3
"""calculate perimeter of Island"""

def island_perimeter(grid):
    """function that calculates perimeter of Island"""

    per = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i != 0 and grid[i-1][j] == 0:
                    per = per + 1
                if i != len(grid)-1 and grid[i+1][j] == 0:
                    per = per + 1
                if j != 0 and grid[i][j-1] == 0:
                    per = per + 1
                if j != len(grid[i])-1 and grid[i][j+1] == 0:
                    per = per + 1
    return per
