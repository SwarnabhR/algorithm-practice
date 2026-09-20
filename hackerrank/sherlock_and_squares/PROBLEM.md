# Sherlock and Squares

Algorithms > Implementation

## Problem Statement

Watson provides a starting and ending value that describe a range of integers, inclusive of the endpoints. Sherlock must determine the number of square integers within that range.

A square integer is an integer which is the square of an integer.

### Function Description

Complete the `squares` function with the following parameter(s):
- `int a`: the lower range boundary
- `int b`: the upper range boundary

**Returns**: `int` — the number of square integers in the range

### Input Format

The first line contains `q`, the number of test cases.

Each of the next `q` lines contains two space-separated integers, `a` and `b`, the starting and ending integers in the range.

### Constraints

- `1 <= q <= 100`
- `1 <= a <= b <= 10^9`

## Examples

### Example 1
- Input:
  ```
  2
  3 9
  17 24
  ```
- Output:
  ```
  2
  0
  ```
- Explanation:
  - Test Case #00: In range `[3, 9]`, `4` and `9` are the two square integers.
  - Test Case #01: In range `[17, 24]`, there are no square integers.

## Approach

## Complexity

- Time:
- Space:
