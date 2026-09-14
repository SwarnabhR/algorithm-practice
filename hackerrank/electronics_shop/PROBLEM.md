# Electronics Shop

Algorithms > Implementation

## Problem Statement

A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a given budget. Given price lists for keyboards and USB drives and a budget, find the cost to buy them. If it is not possible to buy both items, return `-1`.

### Function Description

Complete the `getMoneySpent` function with the following parameter(s):
- `int keyboards[n]`: the keyboard prices
- `int drives[m]`: the drive prices
- `int b`: the budget

**Returns**: `int` — the maximum amount that can be spent buying exactly one keyboard and one drive without exceeding budget `b`, or `-1` if no such combination exists

### Input Format

The first line contains three space-separated integers `b`, `n`, and `m`: the budget, the number of keyboard models, and the number of USB drive models.
The second line contains `n` space-separated integers describing the prices of each keyboard model.
The third line contains `m` space-separated integers describing the prices of each USB drive model.

### Constraints

`1 <= b <= 10^5`
`1 <= n, m <= 10^3`
`1 <= keyboard price, drive price <= 10^5`

## Examples

### Example 1
- Input:
  ```
  10 2 3
  3 1
  5 2 8
  ```
- Output:
  ```
  9
  ```
- Explanation: Buy the keyboard priced `1` and the USB drive priced `8` for a total cost of `9`. That is the maximum combination within the budget of `10`; for instance `3 + 8 = 11` exceeds the budget, while `1 + 8 = 9` is valid and maximal.

### Example 2
- Input:
  ```
  5 1 1
  4
  5
  ```
- Output:
  ```
  -1
  ```
- Explanation: There is no way to buy one keyboard and one USB drive because `4 + 5 = 9 > 5`, so the answer is `-1`.

## Approach

## Complexity

- Time:
- Space:
