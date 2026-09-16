# Viral Advertising

Algorithms > Implementation

## Problem Statement

HackerLand Enterprise is adopting a new viral advertising strategy. When they launch a new product, they advertise it to exactly `5` people on social media.

On the first day, half of those `5` people (i.e. `floor(5/2) = 2`) like the advertisement and each shares it with `3` of their friends. At the beginning of the second day, `2 * 3 = 6` people receive the advertisement.

Each day, `floor(recipients/2)` of the recipients like the advertisement and will share it with `3` friends each on the following day. Assuming nobody receives the advertisement twice, determine how many people have liked the ad by the end of a given day, beginning with launch day as day `1`.

### Function Description

Complete the `viralAdvertising` function with the following parameter(s):
- `int n`: the day number to report

**Returns**: `int` — the cumulative likes at that day

### Input Format

A single integer, `n`, the day number.

### Constraints

- `1 <= n <= 50`

## Examples

### Example 1
- Input:
  ```
  3
  ```
- Output:
  ```
  9
  ```
- Explanation:
  ```
  Day  Shared  Liked  Cumulative
  1     5       2       2
  2     6       3       5
  3     9       4       9
  ```
  `2` people liked the advertisement on day 1, `3` on day 2, and `4` on day 3, so the cumulative total is `2 + 3 + 4 = 9`.

## Approach

## Complexity

- Time:
- Space:
