# Append and Delete

Algorithms > Implementation

## Problem Statement

You have two strings of lowercase English letters, `s` and `t`. You can perform two types of operations on `s`:

1. Append a lowercase English letter to the end of `s`.
2. Delete the last character of `s`. Performing this operation on an empty string results in an empty string.

Given an integer `k`, determine whether or not you can convert `s` to `t` by performing **exactly** `k` of the above operations on `s`. If it's possible, print `Yes`. Otherwise, print `No`.

### Function Description

Complete the `appendAndDelete` function with the following parameter(s):
- `string s`: the initial string
- `string t`: the desired string
- `int k`: the exact number of operations that must be performed

**Returns**: `string` — either `Yes` or `No`

### Input Format

The first line contains a string `s`, the initial string.

The second line contains a string `t`, the desired final string.

The third line contains an integer `k`, the number of operations.

### Constraints

- `s` and `t` consist of lowercase English letters only.

## Examples

### Example 1
- Input:
  ```
  hackerhappy
  hackerrank
  9
  ```
- Output:
  ```
  Yes
  ```
- Explanation: `hackerhappy` and `hackerrank` share the common prefix `hacker`. Perform 5 delete operations to reduce `s` to `hacker`, then perform 4 append operations (`r`, `a`, `n`, `k`) to get `hackerrank`. That's exactly 9 operations, so the answer is `Yes`.

### Example 2
- Input:
  ```
  aba
  aba
  7
  ```
- Output:
  ```
  Yes
  ```
- Explanation: Perform 3 delete operations to reduce `s` ("aba") to the empty string, then perform 3 append operations (`a`, `b`, `a`) to rebuild `aba` — 6 operations, one short of `k=7`. The 7th operation is absorbed by deleting the (already empty) string once more, since deleting an empty string is a no-op that still counts as a move. Because `k=7 >= |s|+|t| = 6`, there's always enough "budget" to pad out to exactly `k` operations this way, so the answer is `Yes`.

### Example 3
- Input:
  ```
  ashley
  ash
  2
  ```
- Output:
  ```
  No
  ```
- Explanation: Converting `ashley` to `ash` requires a minimum of 3 delete operations (removing `l`, `e`, `y`). Since 2 operations isn't enough to reach `ash`, the answer is `No`.

## Approach

## Complexity

- Time:
- Space:
