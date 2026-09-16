# Beautiful Days at the Movies

Algorithms > Implementation

## Problem Statement

Lily likes to play games with integers. In one such game, she determines the difference between a number and its reverse. For instance, given the number `12`, its reverse is `21`. Their difference is `9`.

Given a range of numbered days `i` to `j` (inclusive) and a number `k`, determine the number of days in the range that are beautiful. A day `d` is beautiful if `|d - reverse(d)|` is evenly divisible by `k`.

### Function Description

Complete the `beautifulDays` function with the following parameter(s):
- `int i`: the starting day number
- `int j`: the ending day number
- `int k`: the divisor

**Returns**: `int` — the number of beautiful days in the range

### Input Format

A single line of three space-separated integers describing the respective values of `i`, `j`, and `k`.

### Constraints

- `1 <= i <= j <= 1000000`
- `1 <= k <= 10000`

## Examples

### Example 1
- Input:
  ```
  20 23 6
  ```
- Output:
  ```
  2
  ```
- Explanation: The range is days `20, 21, 22, 23`.
  - Day `20`: `|20 - 02| = 18`, divisible by `6` → beautiful.
  - Day `21`: `|21 - 12| = 9`, not divisible by `6`.
  - Day `22`: `|22 - 22| = 0`, divisible by `6` → beautiful.
  - Day `23`: `|23 - 32| = 9`, not divisible by `6`.
  - Only `2` days (`20` and `22`) are beautiful.

## Approach

## Complexity

- Time:
- Space:
