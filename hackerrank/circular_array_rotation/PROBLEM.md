# Circular Array Rotation

Algorithms > Implementation

## Problem Statement

A right circular rotation on an array of integers moves the last array element to the first position and shifts all remaining elements right by one.

Given an array `a`, perform `k` right circular rotations, then report the values of the elements at the given zero-based `queries` indices in the rotated array.

### Function Description

Complete the `circularArrayRotation` function with the following parameter(s):
- `int a[n]`: the array to rotate
- `int k`: the rotation count
- `int queries[q]`: the indices to report

**Returns**: `int[q]` — the values in the rotated `a` as requested in `queries`

### Input Format

The first line contains 3 space-separated integers, `n`, `k`, and `q` — the number of elements in the array, the rotation count, and the number of queries.

The second line contains `n` space-separated integers describing array element `a[i]` (where `0 <= i < n`).

Each of the `q` subsequent lines contains a single integer, an index of an element in the rotated array to return.

### Constraints

- `1 <= n <= 100`
- `1 <= k <= 100`
- `1 <= q <= 100`
- `1 <= a[i] <= 100`
- `0 <= queries[i] < n`

## Examples

### Example 1 (Sample Input 0)
- Input:
  ```
  3 2 3
  1 2 3
  0
  1
  2
  ```
- Output:
  ```
  2
  3
  1
  ```
- Explanation: After the first rotation, the array is `[3, 1, 2]`. After the second rotation, the array is `[2, 3, 1]`. Query `0` → `2`, query `1` → `3`, query `2` → `1`.

## Approach

## Complexity

- Time:
- Space:
