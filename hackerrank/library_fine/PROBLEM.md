# Library Fine

Algorithms > Implementation

## Problem Statement

Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:

- If the book is returned on or before the expected return date, no fine will be charged (i.e. `fine = 0`).
- If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, `fine = 15 Hackos × (the number of days late)`.
- If the book is returned after the expected return month but still within the same calendar year as the expected return date, `fine = 500 Hackos × (the number of months late)`.
- If the book is returned after the calendar year in which it was expected, there is a fixed fine of `10000 Hackos`.

Charges are based only on the least precise measure of lateness. For example, whether a book is due January 1, 2017 or December 31, 2017, if it is returned January 1, 2018, that is a year late and the fine would be `10000`.

### Function Description

Complete the `libraryFine` function with the following parameter(s):
- `int d1, m1, y1`: returned date day, month and year
- `int d2, m2, y2`: due date day, month and year

**Returns**: `int` — the amount of the fine, or `0` if there is none

### Input Format

The first line contains 3 space-separated integers, `d1 m1 y1`, denoting the respective day, month, and year on which the book was returned.

The second line contains 3 space-separated integers, `d2 m2 y2`, denoting the respective day, month, and year on which the book was due to be returned.

### Constraints

- `1 <= d1, d2 <= 31`
- `1 <= m1, m2 <= 12`
- `1 <= y1, y2 <= 3000`
- It is guaranteed that the dates are valid Gregorian calendar dates.

## Examples

### Example 1
- Input:
  ```
  9 6 2015
  6 6 2015
  ```
- Output:
  ```
  45
  ```
- Explanation: The book was returned on 9/6/2015 and was due on 6/6/2015. The years and months are the same, and the book is `9 - 6 = 3` days late. The fine is `15 × 3 = 45`.

## Approach

## Complexity

- Time:
- Space:
