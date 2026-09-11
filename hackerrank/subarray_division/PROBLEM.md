# Subarray Division

Algorithms > Implementation

## Problem Statement

Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.

Lily decides to share a contiguous segment of the bar selected such that:
- The length of the segment matches Ron's birth month `m`.
- The sum of the integers on the squares is equal to his birth day `d`.

Determine how many ways she can divide the chocolate.

### Function Description

Complete the `birthday` function with the following parameter(s):
- `int s[n]`: the numbers on each of the squares of chocolate
- `int d`: Ron's birth day
- `int m`: Ron's birth month

**Returns**: `int` — the number of ways the bar can be divided

### Input Format

The first line contains an integer `n`, the number of squares in the chocolate bar.
The second line contains `n` space-separated integers `s[i]`.
The third line contains two space-separated integers, `d` and `m`.

### Output Format

Print an integer denoting the total number of ways that Lily can divide the chocolate bar.

## Examples

### Example 1
- Input:
  ```
  5
  1 2 1 3 2
  3 2
  ```
- Output:
  ```
  2
  ```
- Explanation: Ron's birth day is `3` and his birth month is `2`. Lily wants a segment of length `2` summing to `3`. There are two such segments: `[1, 2]` and `[2, 1]`.

### Example 2
- Input:
  ```
  6
  1 1 1 1 1 1
  3 2
  ```
- Output:
  ```
  0
  ```
- Explanation: Every segment of length `2` sums to `2`, never `3`, so there are no ways to divide the bar.

### Example 3
- Input:
  ```
  1
  4
  4 1
  ```
- Output:
  ```
  1
  ```
- Explanation: The only segment of length `1` is `[4]`, and its sum is `4`, so there is one way.

## Constraints

- `1 <= n <= 100`
- `1 <= s[i] <= 5`
- `1 <= d <= 31`
- `1 <= m <= 12`

## Approach

## Complexity

- Time:
- Space:
