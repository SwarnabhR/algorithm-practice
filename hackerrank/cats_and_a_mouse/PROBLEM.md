# Cats and a Mouse

Algorithms > Implementation

## Problem Statement

Two cats and a mouse are at various positions on a line. You are given their starting positions. Determine which cat will reach the mouse first, assuming the mouse does not move and the cats travel at equal speed. If the cats arrive at the same time, the mouse will run away while they fight.

You are given `q` queries in the form of `x`, `y`, and `z` representing the respective positions for cat A, cat B, and mouse C. Complete the function `catAndMouse` to return the appropriate answer to each query, which is printed on a new line:

- If cat A catches the mouse first, print `Cat A`.
- If cat B catches the mouse first, print `Cat B`.
- If both cats reach the mouse at the same time, print `Mouse C` as the two cats fight and mouse escapes.

### Function Description

Complete the `catAndMouse` function with the following parameter(s):
- `int x`: Cat A's position
- `int y`: Cat B's position
- `int z`: Mouse C's position

**Returns**: `string` — either `Cat A`, `Cat B`, or `Mouse C`

### Input Format

The first line contains a single integer `q`, denoting the number of queries.
Each of the `q` subsequent lines contains three space-separated integers describing the respective values of `x` (cat A's location), `y` (cat B's location), and `z` (mouse C's location).

### Constraints

`1 <= q <= 100`
`1 <= x, y, z <= 100`
`x != z` (cat A doesn't start on the mouse)
`y != z` (cat B doesn't start on the mouse)

## Examples

### Example 1
- Input:
  ```
  2
  1 2 3
  1 3 2
  ```
- Output:
  ```
  Cat B
  Mouse C
  ```
- Explanation:
  - Query 0: cat A is at position `1`, cat B is at position `2`, and the mouse is at position `3`. Cat A is `|1 - 3| = 2` units away and cat B is `|2 - 3| = 1` unit away, so cat B reaches the mouse first and we print `Cat B`.
  - Query 1: cat A is at position `1`, cat B is at position `3`, and the mouse is at position `2`. Both cats are `1` unit away from the mouse, so they arrive at the same time, fight, and the mouse escapes: we print `Mouse C`.

### Example 2
- Input:
  ```
  3
  1 5 2
  10 4 5
  7 7 100
  ```
- Output:
  ```
  Cat A
  Cat B
  Mouse C
  ```
- Explanation:
  - Query 0: cat A is `|1 - 2| = 1` unit away, cat B is `|5 - 2| = 3` units away, so cat A wins.
  - Query 1: cat A is `|10 - 5| = 5` units away, cat B is `|4 - 5| = 1` unit away, so cat B wins.
  - Query 2: both cats start at position `7` and are `93` units away, so they tie and the mouse escapes.

## Approach

## Complexity

- Time:
- Space:
