# Save the Prisoner!

Algorithms > Implementation

## Problem Statement

A jail has `n` prisoners seated around a circular table in chairs numbered `1` to `n`, and `m` pieces of candy to distribute. Starting at chair `s`, one candy is handed to each prisoner sequentially around the table (wrapping back to chair `1` after chair `n`) until all `m` candies have been distributed.

The last piece of candy tastes awful. Determine the chair number occupied by the prisoner who receives that last candy.

### Function Description

Complete the `saveThePrisoner` function with the following parameter(s):
- `int n`: the number of prisoners
- `int m`: the number of sweets
- `int s`: the chair number to begin passing out sweets from

**Returns**: `int` — the chair number of the prisoner to warn

### Input Format

The first line contains an integer, `t`, the number of test cases.

Each of the next `t` lines contains 3 space-separated integers: `n`, `m`, and `s`.

### Constraints

- `1 <= t <= 100`
- `1 <= n <= 10^9`
- `1 <= m <= 10^9`
- `1 <= s <= n`

## Examples

### Example 1 (Sample Input 0)
- Input:
  ```
  2
  5 2 1
  5 2 2
  ```
- Output:
  ```
  2
  3
  ```
- Explanation: In the first query, there are 5 prisoners and 2 sweets, starting at seat 1. Prisoners in seats 1 and 2 get sweets — warn prisoner 2. In the second query, distribution starts at seat 2, so prisoners in seats 2 and 3 get sweets — warn prisoner 3.

### Example 2 (Sample Input 1)
- Input:
  ```
  2
  7 19 2
  3 7 3
  ```
- Output:
  ```
  6
  3
  ```
- Explanation: In the first case, there are 7 prisoners and 19 sweets starting at chair 2 — the candies wrap around twice, with 5 more passed from seat 2 to seat 6, so warn prisoner 6. In the second case, there are 3 prisoners and 7 candies starting at seat 3 — they wrap around twice, with one more to pass to the prisoner at seat 3, so warn prisoner 3.

## Approach

## Complexity

- Time:
- Space:
