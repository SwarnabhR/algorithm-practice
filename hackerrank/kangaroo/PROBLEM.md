# Kangaroo (Number Line Jumps)

## Problem Statement

Two kangaroos are on a number line, both jumping in the positive direction (toward positive infinity).

The first kangaroo starts at location `x1` and moves at a rate of `v1` meters per jump.
The second kangaroo starts at location `x2` and moves at a rate of `v2` meters per jump.

Determine whether there is a way for both kangaroos to land at the same location at the same time (after the same number of jumps). If possible, return `YES`, otherwise return `NO`.

### Function Description

Complete the `kangaroo` function with the following parameters:
- `x1`, `v1`: starting position and jump distance for kangaroo 1
- `x2`, `v2`: starting position and jump distance for kangaroo 2

**Returns**: string, either `YES` or `NO`

### Input Format

A single line of four space-separated integers denoting the respective values of `x1`, `v1`, `x2`, and `v2`.

### Output Format

Print `YES` if the two kangaroos will ever be at the same location at the same time, otherwise print `NO`.

## Examples

### Example 1
- Input:
  ```
  0 3 4 2
  ```
- Output:
  ```
  YES
  ```

### Example 2
- Input:
  ```
  0 2 5 3
  ```
- Output:
  ```
  NO
  ```

## Constraints

- `0 <= x1 < x2 <= 10000`
- `0 <= v1, v2 <= 10000`
