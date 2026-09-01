# 13. Roman to Integer

## Problem Statement

Given a roman numeral string `s`, convert it to an integer.

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

| Symbol | Value |
|--------|-------|
| I      | 1     |
| V      | 5     |
| X      | 10    |
| L      | 50    |
| C      | 100   |
| D      | 500   |
| M      | 1000  |

Usually, smaller values appear before larger values. However, the numeral for four is `IV`, and the numeral for nine is `IX`. This follows the subtraction rule: In these six cases, a smaller value is placed before a larger value to indicate subtraction.

- I can be placed before V (5) and X (10) to make 4 and 9.
- X can be placed before L (50) and C (100) to make 40 and 90.
- C can be placed before D (500) and M (1000) to make 400 and 900.

## Examples

### Example 1
- Input: `s = "III"`
- Output: `3`
- Explanation: III = 1 + 1 + 1 = 3.

### Example 2
- Input: `s = "58"`
- Output: `58`
- Explanation: LVIII = 50 + 5 + 1 + 1 + 1 = 58.

### Example 3
- Input: `s = "MCMXCIV"`
- Output: `1994`
- Explanation: MCMXCIV = 1000 + (1000 - 100) + (100 - 10) + (5 - 1) = 1994.

## Constraints

- `1 <= s.length <= 15`
- `s` contains only the characters `('I', 'V', 'X', 'L', 'C', 'D', 'M')`.
- It is guaranteed that `s` is a valid roman numeral in the range `[1, 3999]`.

## Approach

Iterate through the string. Use a map of roman symbols to values. When a smaller value appears before a larger value, subtract it. Otherwise, add it.

## Complexity

- Time: O(n) — single pass through string
- Space: O(1) — constant space for symbol map
