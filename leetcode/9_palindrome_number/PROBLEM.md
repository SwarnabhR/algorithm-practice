# 9. Palindrome Number

## Problem Statement

Given an integer `x`, return `true` if `x` is palindromic, and `false` otherwise.

## Examples

### Example 1
- Input: `x = 121`
- Output: `true`
- Explanation: `121` reads as `121` from left to right and from right to left.

### Example 2
- Input: `x = -121`
- Output: `false`
- Explanation: From left to right, it reads `-121`. From right to left, it becomes `121-`. Therefore it is not a palindrome.

### Example 3
- Input: `x = 10`
- Output: `false`
- Explanation: Reads `01` from right to left. Therefore it is not a palindrome.

## Constraints

- `-2^31 <= x <= 2^31 - 1`

## Approach

Reverse the integer and compare with the original. Handle negative numbers (they cannot be palindromes). Alternatively, convert to string and check if it reads the same forwards and backwards.

## Complexity

- Time: O(log n) — proportional to number of digits
- Space: O(1) or O(n) depending on approach
