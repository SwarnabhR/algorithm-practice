# Simple Array Sum

## Problem Statement

Given an array of integers, calculate and print the sum of all elements.

### Function Description

Complete the `simpleArraySum` function with the following parameter(s):
- `ar`: an array of integers

**Return**: the sum of the array elements

### Input Format

The first line of the input consists of an integer `n` (the number of elements).
The second line contains `n` space-separated integers.

### Output Format

Return the integer sum of the elements in the array.

## Examples

### Example 1
- Input:
  ```
  6
  1 2 3 4 5 6
  ```
- Output: `21`
- Explanation: The sum of 1 + 2 + 3 + 4 + 5 + 6 = 21.

## Constraints

- `1 <= n <= 1000`
- `0 <= ar[i] <= 1000`

## Approach

Iterate through the array and accumulate the sum of all elements.

## Complexity

- Time: O(n) — single pass through array
- Space: O(1) — constant extra space
