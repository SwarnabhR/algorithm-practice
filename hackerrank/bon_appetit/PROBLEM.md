# Bon Appetit

Algorithms > Implementation

## Problem Statement

Two friends Anna and Brian are deciding how to split the bill at a dinner. Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. You must determine if his calculation is correct.

For example, assume the bill has the following prices: `bill = [2, 4, 6]`. Anna declines to eat item `0` (`bill[0] = 2`) which costs `2`. If Brian calculates the bill correctly, Anna will pay `(4 + 6) / 2 = 5`. If he includes the cost of item `0`, he will calculate `(2 + 4 + 6) / 2 = 6`. In the second case, he should refund `1` to Anna.

### Function Description

Complete the `bonAppetit` function with the following parameter(s):
- `int bill[n]`: the cost of each item ordered
- `int k`: the 0-based index of the item Anna doesn't eat
- `int b`: the amount of money Anna contributed to the bill

This function should not return anything. It should print `Bon Appetit` if the bill is fairly split; otherwise it should print the integer amount of money Brian owes Anna.

### Input Format

The first line contains two space-separated integers `n` and `k`, the number of items ordered and the 0-based index of the item that Anna did not eat.
The second line contains `n` space-separated integers `bill[i]` where `0 <= i < n`.
The third line contains an integer, `b`, the amount of money that Brian charged Anna for her share of the bill.

### Constraints

The amount of money due Anna will always be an integer.

## Examples

### Example 1
- Input:
  ```
  4 1
  3 10 2 9
  12
  ```
- Output:
  ```
  5
  ```
- Explanation: Anna didn't eat item `1` (cost `10`), but she shared the rest of the items with Brian. The total cost of the shared items is `3 + 2 + 9 = 14` and, split in half, the cost per person is `7`. Brian charged her `12` for her portion of the bill. We print the amount Anna was overcharged, `12 - 7 = 5`, on a new line.

### Example 2
- Input:
  ```
  4 1
  3 10 2 9
  7
  ```
- Output:
  ```
  Bon Appetit
  ```
- Explanation: Anna didn't eat item `1`, but she shared the rest of the items with Brian. The total cost of the shared items is `14` and, split in half, the cost per person is `7`. Because `b = 7`, we print `Bon Appetit` on a new line.

## Approach

## Complexity

- Time:
- Space:
