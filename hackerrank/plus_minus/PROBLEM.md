# Plus Minus

## Problem Statement

Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.

### Function Description

Complete the `plusMinus` function with the following parameter:
- `arr`: an array of integers

**Return**: nothing — the function prints the three ratios directly.

### Input Format

The first line contains a single integer `n`, the size of the array.
The second line contains `n` space-separated integers that describe `arr`.

### Output Format

Print the following three lines, each with 6 digits after the decimal point:
1. The proportion of positive values in the array
2. The proportion of negative values in the array
3. The proportion of zeros in the array

## Examples

### Example 1
- Input:
  ```
  6
  -4 3 -9 0 4 1
  ```
- Output:
  ```
  0.500000
  0.333333
  0.166667
  ```
- Explanation:
  - Positive elements: 3, 4, 1 → 3/6 = 0.500000
  - Negative elements: -4, -9 → 2/6 = 0.333333
  - Zero elements: 0 → 1/6 = 0.166667

## Notes

- Results are rounded to 6 decimal places (trailing zeros are kept).
- Use floating-point division — integer division will truncate every ratio to 0.

## Approach

_To be filled in._

## Complexity

- Time:
- Space:
