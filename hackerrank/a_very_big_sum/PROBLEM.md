# A Very Big Sum

## Problem Statement

In this challenge, you need to calculate and print the sum of elements in an array, considering that some integers may be very large.

### Function Description

Complete the `aVeryBigSum` function with the following parameter(s):
- `ar`: an array of integers

**Return**: the sum of the array elements

### Input Format

The first line of the input consists of an integer `n`.
The next line contains `n` space-separated integers contained in the array.

### Output Format

Return the integer sum of the elements in the array.

## Examples

### Example 1
- Input: 
  ```
  5
  1000000001 1000000002 1000000003 1000000004 1000000005
  ```
- Output: `5000000015`
- Explanation: The sum of the five large integers exceeds 32-bit integer range, requiring `long int`.

## Constraints

- The range of 32-bit integer is `[-2^31, 2^31 - 1]`
- When we add several integer values, the resulting sum might exceed this range
- Use `long int` C++/Java to store such sums

## Approach

Iterate through the array and accumulate the sum using a `long` variable to handle values that exceed 32-bit integer limits.

## Complexity

- Time: O(n) — single pass through array
- Space: O(1) — constant extra space
