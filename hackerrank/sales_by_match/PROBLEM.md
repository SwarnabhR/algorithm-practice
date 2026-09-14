# Sales by Match

Algorithms > Implementation

## Problem Statement

There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

### Function Description

Complete the `sockMerchant` function with the following parameter(s):
- `int n`: the number of socks in the pile
- `int ar[n]`: the colors of each sock

**Returns**: `int` — the number of matching pairs

### Input Format

The first line contains an integer `n`, the number of socks represented in `ar`.
The second line contains `n` space-separated integers, `ar[i]`, the colors of the socks in the pile.

### Constraints

`1 <= n <= 50`
`1 <= ar[i] <= 100`

## Examples

### Example 1
- Input:
  ```
  9
  10 20 20 10 10 30 50 10 20
  ```
- Output:
  ```
  3
  ```
- Explanation: There are three pairs: color `10` appears `4` times (2 pairs), color `20` appears `3` times (1 pair), color `30` and `50` each appear once (no pair). Total pairs = `3`.

## Approach

## Complexity

- Time:
- Space:
