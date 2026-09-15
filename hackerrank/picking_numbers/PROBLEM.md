# Picking Numbers

Algorithms > Implementation

## Problem Statement

Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to `1`.

### Function Description

Complete the `pickingNumbers` function with the following parameter(s):
- `int a[n]`: an array of integers

**Returns**: `int` — the length of the longest subarray that meets the criterion

### Input Format

The first line contains a single integer `n`, the size of the array `a`.

The second line contains `n` space-separated integers, each `a[i]`.

### Constraints

- `2 <= n <= 100`
- `0 <= a[i] <= 100`
- The answer will be `>= 2`

## Examples

### Example 1
- Input:
  ```
  6
  4 6 5 3 3 1
  ```
- Output:
  ```
  3
  ```
- Explanation: We choose the following multiset of integers from the array: `{4, 3, 3}`. Each pair in the multiset has an absolute difference `<= 1`, so we print the number of chosen integers, `3`, as our answer.

### Example 2
- Input:
  ```
  6
  1 2 2 3 1 2
  ```
- Output:
  ```
  5
  ```
- Explanation: We choose the multiset `{1, 2, 2, 1, 2}`. Each pair in the multiset has an absolute difference `<= 1`, so we print the number of chosen integers, `5`, as our answer.

## Approach

## Complexity

- Time:
- Space:
