# Breaking the Records

Algorithms > Implementation

## Problem Statement

Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game.

Points scored in the first game establish her record for the season, and she begins counting from there.

### Function Description

Complete the `breakingRecords` function with the following parameter:
- `int scores[n]`: points scored per game

**Returns**: `int[2]` — an array with the numbers of times she broke her records. Index 0 is for breaking most points records, index 1 is for breaking least points records.

### Input Format

The first line contains an integer `n`, the number of games.
The second line contains `n` space-separated integers describing `scores`.

### Output Format

Print two space-separated integers: the number of times the maximum record was broken, followed by the number of times the minimum record was broken.

## Examples

### Example 1
- Input:
  ```
  9
  10 5 20 20 4 5 2 25 1
  ```
- Output:
  ```
  2 4
  ```

### Example 2
- Input:
  ```
  10
  3 4 21 36 10 28 35 5 24 42
  ```
- Output:
  ```
  4 0
  ```

## Constraints

- `1 <= n <= 1000`
- `0 <= scores[i] <= 10^8`

## Approach

## Complexity

- Time:
- Space:
