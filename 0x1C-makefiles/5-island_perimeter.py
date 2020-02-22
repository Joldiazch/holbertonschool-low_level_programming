#!/usr/bin/python3

def island_perimeter(grid):
    cont = 0
    perimeter = 0
    if len(grid) <= 100:
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    if j < len(grid[i]):
                        if grid[i][j + 1] == 1:
                            cont += 1
                    if j - 1 >= 0:
                        if grid[i][j - 1] == 1:
                            cont += 1
                    if i + 1 <= len(grid) - 1:
                        if grid[i + 1][j] == 1:
                            cont += 1
                    if i - 1 >= 0:
                        if grid[i - 1][j] == 1:
                            cont += 1
                    perimeter += 4 - cont
                    cont = 0
        return perimeter