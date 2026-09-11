# Migratory Birds

Algorithms > Implementation

## Problem Statement

Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

### Function Description

Complete the `migratoryBirds` function with the following parameter(s):
- `int arr[n]`: the types of birds sighted

**Returns**: `int` — the lowest type id of the most frequently sighted birds

### Input Format

The first line contains an integer, `n`, the size of `arr`.
The second line describes `arr` as `n` space-separated integers, each a type number of the bird sighted.

### Constraints

It is guaranteed that each type is `1`, `2`, `3`, `4`, or `5`.

## Examples

### Example 1
- Input:
  ```
  6
  1 4 4 4 5 3
  ```
- Output:
  ```
  4
  ```
- Explanation: Type `1` occurs `1` time, type `4` occurs `3` times, type `5` occurs `1` time, type `3` occurs `1` time. Type `4` occurs at the highest frequency, so print `4`.

### Example 2
- Input:
  ```
  11
  1 2 3 4 5 4 3 2 1 3 4
  ```
- Output:
  ```
  3
  ```
- Explanation: Type `1` occurs `2` times, type `2` occurs `2` times, type `3` occurs `3` times, type `4` occurs `3` times, and type `5` occurs `1` time. Types `3` and `4` tie at the highest frequency (`3`), and the lower of those is type `3`.

## Approach

## Complexity

- Time:
- Space:
