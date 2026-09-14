# Counting Valleys

Algorithms > Implementation

## Problem Statement

An avid hiker keeps meticulous records of their hikes. During the last hike that took exactly `steps` steps, for every step it was noted if it was an uphill, `U`, or a downhill, `D` step. Hikes always start and end at sea level, and each step up or down represents a `1` unit change in altitude. We define the following terms:

- A **mountain** is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level.
- A **valley** is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.

Given the sequence of up and down steps during a hike, find and print the number of valleys walked through.

### Function Description

Complete the `countingValleys` function with the following parameter(s):
- `int steps`: the number of steps on the hike
- `string path`: a string describing the path, of `steps` characters, each `'U'` or `'D'`

**Returns**: `int` — the number of valleys traversed

### Input Format

The first line contains an integer `steps`, the number of steps on the hike.
The second line contains a single string `path`, of `steps` characters that describe the path.

### Constraints

`2 <= steps <= 10^6`
`path[i] ∈ {'U', 'D'}`

## Examples

### Example 1
- Input:
  ```
  8
  UDDDUDUU
  ```
- Output:
  ```
  1
  ```
- Explanation: If we represent `_` as sea level, a step up as `/`, and a step down as `\`, the hike can be drawn as:
  ```
  _/\      _
     \    /
      \/\/
  ```
  The hiker enters and leaves one valley.

### Example 2
- Input:
  ```
  8
  DUDUDUDU
  ```
- Output:
  ```
  4
  ```
- Explanation: Each `DU` pair steps down from sea level to altitude `-1` and back up to sea level, completing a valley. There are four such pairs, so four valleys are traversed.

## Approach

## Complexity

- Time:
- Space:
