# Forming a Magic Square

Algorithms > Implementation

## Problem Statement

We define a magic square to be an `n x n` matrix of distinct positive integers from `1` to `n^2` where the sum of any row, column, or diagonal of length `n` is always equal to the same number: the magic constant.

You will be given a `3 x 3` matrix `s` of integers in the inclusive range `[1, 9]`. We can convert any digit `a` to any other digit `b` in the range `[1, 9]` at a cost of `|a - b|`. Given `s`, convert it into a magic square at minimal cost. Print this cost on a new line.

**Note**: The resulting magic square must contain distinct integers in the inclusive range `[1, 9]`.

### Function Description

Complete the `formingMagicSquare` function with the following parameter(s):
- `int s[3][3]`: a `3 x 3` array of integers

**Returns**: `int` — the minimal total cost of converting the input square to a magic square

### Input Format

Each of the `3` lines contains three space-separated integers of row `s[i]`.

### Constraints

`s[i][j]` is in the inclusive range `[1, 9]`

## Examples

### Example 1
- Input:
  ```
  4 9 2
  3 5 7
  8 1 5
  ```
- Output:
  ```
  1
  ```
- Explanation: If we change the bottom right value, `s[2][2]`, from `5` to `6` at a cost of `|5 - 6| = 1`, `s` becomes a magic square at the minimum possible cost.

### Example 2
- Input:
  ```
  4 8 2
  4 5 7
  6 1 6
  ```
- Output:
  ```
  4
  ```
- Explanation: Converting `s` into the nearest magic square requires changing several cells, and the cheapest set of changes totals a cost of `4`.

## Approach

## Complexity

- Time:
- Space:
