# Divisible Sum Pairs

Algorithms > Implementation

## Problem Statement

Given an array of integers and a positive integer `k`, determine the number of `(i, j)` pairs where `i < j` and `ar[i] + ar[j]` is divisible by `k`.

### Function Description

Complete the `divisibleSumPairs` function with the following parameter(s):
- `int n`: the length of array `ar`
- `int ar[n]`: an array of integers
- `int k`: the integer divisor

**Returns**: `int` — the number of pairs

### Input Format

The first line contains two space-separated integers, `n` and `k`.
The second line contains `n` space-separated integers, each a value of `ar[i]`.

### Output Format

Print an integer denoting the number of `(i, j)` pairs where `i < j` and `ar[i] + ar[j]` is divisible by `k`.

## Examples

### Example 1
- Input:
  ```
  6 3
  1 3 2 6 1 2
  ```
- Output:
  ```
  5
  ```
- Explanation: The valid pairs are `(0,2)`, `(0,5)`, `(1,3)`, `(2,4)`, and `(4,5)`.

## Constraints

- `1 <= n <= 100`
- `1 <= k <= 100`
- `1 <= ar[i] <= 100`

## Approach

## Complexity

- Time:
- Space:
