# Utopian Tree

Algorithms > Implementation

## Problem Statement

The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by `1` meter.

A Utopian Tree sapling with a height of `1` meter is planted at the onset of spring. How tall will the tree be after `n` growth cycles?

### Function Description

Complete the `utopianTree` function with the following parameter(s):
- `int n`: the number of growth cycles to simulate

**Returns**: `int` — the height of the tree after the given number of cycles

### Input Format

The first line contains an integer, `t`, the number of test cases.

Each of the `t` subsequent lines contains an integer, `n`, the number of cycles for that test case.

### Constraints

- `1 <= t <= 10`
- `0 <= n <= 60`

## Examples

### Example 1
- Input:
  ```
  3
  0
  1
  4
  ```
- Output:
  ```
  1
  2
  7
  ```
- Explanation: For `n = 0`, the height remains `1`. For `n = 1`, the tree doubles to `2` after the spring cycle. For `n = 4`, the tree doubles in spring (`1 -> 2`), grows a meter in summer (`2 -> 3`), doubles again (`3 -> 6`), then grows a meter (`6 -> 7`).

## Approach

## Complexity

- Time:
- Space:
