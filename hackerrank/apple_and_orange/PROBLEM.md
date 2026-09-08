# Apple and Orange

## Problem Statement

Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.

The house spans the inclusive range `[s, t]` on the x-axis. The apple tree is located at point `a` (to the left of the house), and the orange tree is at point `b` (to the right of the house).

When a fruit falls from its tree, it lands `d` units of distance from its tree of origin along the x-axis. A negative value of `d` means the fruit fell `d` units to the tree's left, and a positive value of `d` means it fell `d` units to the tree's right.

### Example

Sam's house is between `s = 7` and `t = 11`. The apple tree is located at `a = 5` and the orange tree at `b = 15`. There are `3` apples and `2` oranges.

Apples fall at distances `-2, 2, 1` from `a`, landing at `3, 7, 6`.
Oranges fall at distances `5, -6` from `b`, landing at `20, 9`.

One apple (at `7`) and one orange (at `9`) land in the inclusive range `[7, 11]`, so we print:
```
1
1
```

### Function Description

Complete the `countApplesAndOranges` function with the following parameters:
- `s`: starting point of Sam's house location
- `t`: ending point of Sam's house location
- `a`: location of the apple tree
- `b`: location of the orange tree
- `apples`: distances at which each apple falls from point `a`
- `oranges`: distances at which each orange falls from point `b`

**Returns**: prints the number of apples and oranges that land on Sam's house, each on a separate line

### Input Format

The first line contains two space-separated integers, `s` and `t`.
The second line contains two space-separated integers, `a` and `b`.
The third line contains two space-separated integers, `m` and `n` (the number of apples and oranges).
The fourth line contains `m` space-separated integers denoting the distances each apple falls from point `a`.
The fifth line contains `n` space-separated integers denoting the distances each orange falls from point `b`.

### Output Format

Print two integers on two separate lines:
- The number of apples that fall on Sam's house.
- The number of oranges that fall on Sam's house.

## Examples

### Example 1
- Input:
  ```
  7 11
  5 15
  3 2
  -2 2 1
  5 -6
  ```
- Output:
  ```
  1
  1
  ```

## Constraints

- `1 <= s < t <= 10^9`
- `1 <= a < b <= 10^9`
- `a < s`
- `b > t`
- `1 <= m, n <= 1000`
- `-10^9 <= d <= 10^9`
