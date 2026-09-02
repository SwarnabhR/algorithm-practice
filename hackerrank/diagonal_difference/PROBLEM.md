# Diagonal Difference

## Problem Statement

Given a square matrix, calculate the absolute difference between the sums of its diagonals.

### Function Description

Complete the `diagonalDifference` function with the following parameter:
- `arr`: a 2-D array of integers (square matrix)

**Return**: the absolute difference in sums along the diagonals

### Input Format

The first line contains a single integer `n`, the number of rows and columns in the square matrix.
Each of the next `n` lines describes a row and consists of `n` space-separated integers.

### Output Format

Return the absolute difference between the sum of the primary diagonal and the sum of the secondary diagonal.

## Examples

### Example 1
- Input:
  ```
  3
  11 2 4
  4 5 6
  10 8 -12
  ```
- Output: `15`
- Explanation:
  - Primary diagonal (top-left to bottom-right): 11 + 5 + (-12) = 4
  - Secondary diagonal (top-right to bottom-left): 4 + 5 + 10 = 19
  - Absolute difference: |4 - 19| = 15

## Definitions

- **Primary diagonal**: Elements at positions where `i == j` (indices are 0-indexed)
- **Secondary diagonal**: Elements at positions where `i + j == n - 1`

## Constraints

- `1 <= n <= 100`
- `-100 <= arr[i][j] <= 100`

## Approach

Iterate through the matrix once:
- Sum the primary diagonal (where i == j)
- Sum the secondary diagonal (where i + j == n - 1)
- Return the absolute difference

## Complexity

- Time: O(n²) — iterate through all n×n elements
- Space: O(1) — constant extra space (excluding input)
