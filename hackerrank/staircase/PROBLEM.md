# Staircase

## Problem Statement

Write a program that prints a right-aligned staircase of size `n`, using `#` symbols and spaces. The staircase has height and base both equal to `n`. The last line is not preceded by any spaces.

### Function Description

Complete the `staircase` function with the following parameter:
- `n`: an integer, the size of the staircase

**Return**: nothing — the function prints the staircase directly.

### Input Format

A single line containing a single integer `n`.

### Output Format

Print a staircase of size `n` using `#` symbols and spaces. Line `i` (1-indexed) contains `n - i` spaces followed by `i` `#` symbols. The last line is not preceded by any spaces.

### Constraints

- `0 < n <= 100`

## Examples

### Example 1
- Input:
  ```
  6
  ```
- Output:
  ```
       #
      ##
     ###
    ####
   #####
  ######
  ```
- Explanation: The staircase is right-aligned within a field of width 6. The first line has 5 spaces and 1 `#`; each subsequent line trades one space for one `#`, until the last line is 6 `#` symbols with no leading spaces.

## Notes

- Each line must be exactly `n` characters wide (spaces + `#`), so the staircase is right-aligned.
- No trailing spaces should follow the `#` symbols on any line.

## Approach

_To be filled in._

## Complexity

- Time:
- Space:
