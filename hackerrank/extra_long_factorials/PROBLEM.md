# Extra Long Factorials

Algorithms > Implementation

## Problem Statement

The factorial of the integer `n`, written `n!`, is defined as:

```text
n! = n x (n - 1) x (n - 2) x ... x 3 x 2 x 1
```

Calculate and print the factorial of a given integer.

Note: Factorials of `n > 20` can't be stored even in a `64-bit long long` variable. Big integers must be used for such calculations. Languages like Java, Python, Ruby, etc. can handle big integers natively, but additional code is needed in C/C++ to handle huge values (e.g. representing the number as a vector/array of digits and performing manual multiplication).

### Function Description

Complete the `extraLongFactorials` function with the following parameter(s):
- `int n`: an integer

The function should print the result and return nothing.

### Input Format

Input consists of a single integer `n`.

### Constraints

- `1 <= n <= 100`

### Output Format

Print the factorial of `n`.

## Examples

### Example 1
- Input:
  ```
  25
  ```
- Output:
  ```
  15511210043330985984000000
  ```
- Explanation: `25!` is calculated and printed.

## Approach

## Complexity

- Time:
- Space:
