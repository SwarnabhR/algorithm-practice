# Between Two Sets

## Problem Statement

There are two arrays of integers. Determine all integers that satisfy the following two conditions:

- The elements of the first array are all factors of the integer being considered.
- The integer being considered is a factor of all elements of the second array.

These numbers are referred to as being between the two arrays. Determine how many such numbers exist.

### Example

`a = [2, 4]`, `b = [16, 32, 96]`.

There are three numbers between the arrays: `4`, `8`, and `16`.
- `2` and `4` divide evenly into `4`, `8`, `12`, and `16`.
- `4`, `8`, and `16` divide evenly into `16`, `32`, and `96`.

### Function Description

Complete the `getTotalX` function with the following parameter(s):
- `a[n]`: an array of integers
- `b[m]`: an array of integers

**Returns**: `int` — the number of integers that are between the sets

### Input Format

The first line contains two space-separated integers, `n` and `m`, the number of elements in arrays `a` and `b`.
The second line contains `n` distinct space-separated integers `a[i]`.
The third line contains `m` distinct space-separated integers `b[i]`.

### Output Format

Print the number of integers between the two sets.

## Examples

### Example 1
- Input:
  ```
  2 3
  2 4
  16 32 96
  ```
- Output:
  ```
  3
  ```

## Constraints

- `1 <= n, m <= 10`
- `1 <= a[i], b[i] <= 100`
