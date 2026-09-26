# P-6-E Write a program to randomly fill in 0s and 1s into a 4x4 2 -dimension list, print the list and find the rows and columns with the most number of 1s.

import random

grid = [[random.randint(0, 1) for _ in range(4)] for _ in range(4)]

print("Generated Grid:")
for row in grid:
    print(row)

row_sums = [sum(row) for row in grid]
col_sums = [sum(grid[row][col] for row in range(4)) for col in range(4)]

max_row_sum = max(row_sums)
max_col_sum = max(col_sums)

max_rows = [i for i, total in enumerate(row_sums) if total == max_row_sum]
max_cols = [i for i, total in enumerate(col_sums) if total == max_col_sum]

print(f"Rows with the most 1s ({max_row_sum} 1s): {max_rows}")
print(f"Columns with the most 1s ({max_col_sum} 1s): {max_cols}")
