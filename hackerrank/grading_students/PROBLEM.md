# Grading Students

## Problem Statement

HackerLand University has the following grading policy:

- Every student receives a grade in the inclusive range from 0 to 100.
- Any grade less than 40 is a failing grade.

Sam is a professor at the university and likes to round each student's grade according to these rules:

- If the difference between the grade and the next multiple of 5 is less than 3, round the grade up to the next multiple of 5.
- If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.

### Examples

- `84` rounds to `85` (85 - 84 is less than 3)
- `29` does not round (result is less than 38)
- `57` does not round (60 - 57 is 3 or higher)

### Function Description

Complete the `gradingStudents` function with the following parameter:
- `grades`: the grades before rounding

**Returns**: the grades after rounding

### Input Format

The first line contains a single integer, `n`, the number of students.
Each of the next `n` lines contains a single integer, `grades[i]`.

### Output Format

Return an integer array containing the rounded grades.

## Examples

### Example 1
- Input:
  ```
  4
  73
  67
  38
  33
  ```
- Output:
  ```
  75
  67
  40
  33
  ```
- Explanation:
  - Student 1 received a 73. The next multiple of 5 from 73 is 75. Since 75 - 73 < 3, the grade is rounded to 75.
  - Student 2 received a 67. The next multiple of 5 from 67 is 70. Since 70 - 67 is not < 3, the grade remains 67.
  - Student 3 received a 38. The next multiple of 5 from 38 is 40. Since 40 - 38 < 3, the grade is rounded to 40.
  - Student 4 received a grade below 38, so the grade remains 33.

## Constraints

- `1 <= grades.length <= 60`
- `0 <= grades[i] <= 100`
