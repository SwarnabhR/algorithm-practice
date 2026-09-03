# Mini-Max Sum

## Problem Statement

Given five positive integers, find the minimum and maximum values that can be
calculated by summing exactly four of the five integers. Then print the
respective minimum and maximum values as a single line of two space-separated
long integers.

### Function Description

Complete the `miniMaxSum` function with the following parameter:
- `arr`: an array of 5 integers

**Return**: nothing — the function prints the min and max sums directly.

### Input Format

A single line of five space-separated integers.

### Output Format

Print two space-separated long integers on one line: the minimum sum and the
maximum sum of 4 of the 5 elements.

## Examples

### Example 1
- Input:
  ```
  1 2 3 4 5
  ```
- Output:
  ```
  10 14
  ```
- Explanation:
  - Sum everything except 5: 1+2+3+4 = 10 (minimum)
  - Sum everything except 1: 2+3+4+5 = 14 (maximum)

## Notes

- Beware of integer overflow — use a 64-bit integer (long/long long) to store the sums.

## Approach

_To be filled in._

## Complexity

- Time:
- Space:
