# Day of the Programmer

Algorithms > Implementation

## Problem Statement

Marie invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of the Programmer (the 256th day of the year) during a year in the inclusive range from 1700 to 2700.

From 1700 to 1917, Russia's official calendar was the Julian calendar; since 1919 they used the Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in 1918, when the next day after January 31st was February 14th. This means that in 1918, February 14th was the 32nd day of the year in Russia.

In both calendar systems, February is the only month with a variable amount of days; it has 29 days during a leap year, and 28 days during all other years. In the Julian calendar, leap years are divisible by 4; in the Gregorian calendar, leap years are either of the following:
- Divisible by 400.
- Divisible by 4 and not divisible by 100.

Given a year, `year`, find the date of the 256th day of that year according to the official Russian calendar during that year. Then print it in the format `dd.mm.yyyy`, where `dd` is the two-digit day, `mm` is the two-digit month, and `yyyy` is `year`.

### Function Description

Complete the `dayOfProgrammer` function with the following parameter(s):
- `int year`: the year to evaluate

**Returns**: `string` — the date of the 256th day of the year, in the format `dd.mm.yyyy`

### Input Format

A single integer denoting year `year`.

### Constraints

`1700 <= year <= 2700`

## Examples

### Example 1
- Input:
  ```
  2017
  ```
- Output:
  ```
  13.09.2017
  ```
- Explanation: In 2017 (not a leap year), the first eight months total 243 days. `256 - 243 = 13`, so Day of the Programmer falls on September 13.

### Example 2
- Input:
  ```
  2016
  ```
- Output:
  ```
  12.09.2016
  ```
- Explanation: In 2016 (a leap year), the first eight months total 244 days. `256 - 244 = 12`, so Day of the Programmer falls on September 12.

### Example 3
- Input:
  ```
  1800
  ```
- Output:
  ```
  12.09.1800
  ```
- Explanation: 1800 is a leap year per the Julian calendar (still in effect), so Day of the Programmer falls on September 12.

## Approach

## Complexity

- Time:
- Space:
