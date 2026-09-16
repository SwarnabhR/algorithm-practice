# Angry Professor

Algorithms > Implementation

## Problem Statement

A Discrete Mathematics professor has a class of `n` students. Frustrated with their lack of discipline, the professor decides to cancel class if fewer than `k` students are present when class starts.

Given the arrival time of each student and a threshold number of attendees, determine if the class is cancelled.

Non-positive arrival times (`a[i] <= 0`) indicate the student arrived early or on time; positive arrival times (`a[i] > 0`) indicate the student arrived `a[i]` minutes late.

### Function Description

Complete the `angryProfessor` function with the following parameter(s):
- `int k`: the threshold number of students
- `int a[n]`: the arrival times of the `n` students

**Returns**: `string` — either `YES` (class is cancelled) or `NO` (class goes on)

### Input Format

The first line contains an integer, `t`, the number of test cases.

Each test case consists of two lines:
- The first line has two space-separated integers, `n` and `k`, the number of students and the cancellation threshold.
- The second line contains `n` space-separated integers describing the arrival times for each student.

### Constraints

- `1 <= t <= 10`
- `1 <= n <= 1000`
- `1 <= k <= n`
- `-100 <= a[i] <= 100`

## Examples

### Example 1
- Input:
  ```
  2
  4 3
  -1 -3 4 2
  4 2
  0 -1 2 1
  ```
- Output:
  ```
  YES
  NO
  ```
- Explanation: In the first test case, only 2 students arrived on time (`-1` and `-3`), but the threshold is 3, so the class is cancelled. In the second test case, 2 students arrived on time (`0` and `-1`), meeting the threshold of 2, so the class is not cancelled.

## Approach

## Complexity

- Time:
- Space:
