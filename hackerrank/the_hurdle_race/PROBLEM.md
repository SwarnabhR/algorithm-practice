# The Hurdle Race

Algorithms > Implementation

## Problem Statement

A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the character has a maximum height they can jump. There is a magic potion they can take that will increase their maximum jump height by `1` unit per dose. Determine how many doses of the potion the character must take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, return `0`.

### Function Description

Complete the `hurdleRace` function with the following parameter(s):
- `int k`: the height the character can jump naturally
- `int height[n]`: the heights of each hurdle

**Returns**: `int` — the minimum number of doses required, always `0` or more

### Input Format

The first line contains two space-separated integers `n` and `k`, the number of hurdles and the maximum height the character can jump naturally.

The second line contains `n` space-separated integers `height[i]` where `0 <= i < n`.

### Constraints

- `1 <= n <= 100`
- `0 <= k <= 100`
- `0 <= height[i] <= 100`

## Examples

### Example 1
- Input:
  ```
  5 4
  1 6 3 5 2
  ```
- Output:
  ```
  2
  ```
- Explanation: The character can jump `4` units high naturally. The tallest hurdle is `6` units, so `6 - 4 = 2` doses of the potion are required.

### Example 2
- Input:
  ```
  5 7
  2 5 4 5 2
  ```
- Output:
  ```
  0
  ```
- Explanation: The character can jump `7` units high naturally and the tallest hurdle is `5` units, so no doses of the potion are required.

## Approach

## Complexity

- Time:
- Space:
