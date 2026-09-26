# Cut the sticks

Algorithms > Implementation

## Problem Statement

You are given a number of sticks of varying lengths. You will iteratively cut the sticks into smaller sticks, discarding the shortest pieces until there are none left. At each iteration you will determine the length of the shortest stick remaining, cut that length from each of the longer sticks and then discard all the pieces of that shortest length. When all the remaining sticks are the same length, they cannot be shortened so discard them.

Given the lengths of `n` sticks, print the number of sticks that are left before each iteration until there are none left.

For example, given `arr = [1, 2, 3]`: the shortest stick length is `1`, so cut that length from the longer two and discard the pieces of length `1`. Now the lengths are `[1, 2]`. Again, the shortest stick is of length `1`, so cut that amount from the longer stick and discard those pieces. There is only one stick left, `[1]`, so discard that stick. The number of sticks at each iteration are `[3, 2, 1]`.

### Function Description

Complete the `cutTheSticks` function with the following parameter(s):
- `int arr[n]`: the lengths of each stick

**Returns**: `int[]` — the number of sticks before each cut operation is performed

### Input Format

The first line contains a single integer `n`, the size of `arr`.

The next line contains `n` space-separated integers, each `arr[i]`, where each value represents the length of the `i`th stick.

### Constraints

- `1 <= n <= 1000`
- `1 <= arr[i] <= 1000`

## Examples

### Example 1
- Input:
  ```
  6
  5 4 4 2 2 8
  ```
- Output:
  ```
  6
  4
  2
  1
  ```
- Explanation:
  ```
  sticks-length        length-of-cut   sticks-cut
  5 4 4 2 2 8             2               6
  3 2 2 _ _ 6             2               4
  1 _ _ _ _ 4             1               2
  _ _ _ _ _ 3             3               1
  _ _ _ _ _ _           DONE            DONE
  ```

### Example 2
- Input:
  ```
  8
  1 2 3 4 3 3 2 1
  ```
- Output:
  ```
  8
  6
  4
  1
  ```
- Explanation:
  ```
  sticks-length         length-of-cut   sticks-cut
  1 2 3 4 3 3 2 1         1               8
  _ 1 2 3 2 2 1 _         1               6
  _ _ 1 2 1 1 _ _         1               4
  _ _ _ 1 _ _ _ _         1               1
  _ _ _ _ _ _ _ _       DONE            DONE
  ```

## Approach

## Complexity

- Time:
- Space:
