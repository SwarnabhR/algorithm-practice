# Find Digits

Algorithms > Implementation

## Problem Statement

An integer `d` is a divisor of an integer `n` if the remainder of `n / d = 0`.

Given an integer `n`, for each digit that makes up the integer, determine whether it is a divisor of `n`. Count the number of divisors occurring within `n`, ignoring any digit that is `0` (since division by zero is undefined).

### Function Description

Complete the `findDigits` function with the following parameter(s):
- `int n`: the value to analyze

**Returns**: `int` — the number of digits in `n` that are divisors of `n`

### Input Format

The first line is an integer `t`, the number of test cases.

Each of the `t` subsequent lines contains an integer `n`.

### Constraints

- `1 <= t <= 15`
- `0 < n <= 10^9`

## Examples

### Example 1
- Input:
  ```
  12
  ```
- Output:
  ```
  2
  ```
- Explanation: The number `12` is broken into two digits, `1` and `2`. Both divide evenly into `12`, so the count is `2`.

### Example 2
- Input:
  ```
  1012
  ```
- Output:
  ```
  3
  ```
- Explanation: The number `1012` is broken into four digits: `1`, `0`, `1`, and `2`. It is evenly divisible by `1`, `1`, and `2`, but not by `0` (division by zero is undefined), so the count is `3`.

## Approach

## Complexity

- Time:
- Space:
