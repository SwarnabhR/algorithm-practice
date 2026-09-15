# Climbing the Leaderboard

Algorithms > Implementation

## Problem Statement

An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking, so its leaderboard works like this:

- The player with the highest score is ranked number `1` on the leaderboard.
- Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.

### Function Description

Complete the `climbingLeaderboard` function with the following parameter(s):
- `int ranked[n]`: the leaderboard scores
- `int player[m]`: the player's scores

**Returns**: `int[m]` — the player's rank after each new score

### Input Format

The first line contains an integer `n`, the number of players on the leaderboard.

The next line contains `n` space-separated integers `ranked[i]`, the leaderboard scores in decreasing order.

The next line contains an integer `m`, the number of games the player plays.

The last line contains `m` space-separated integers `player[j]`, the game scores.

### Constraints

- `1 <= n <= 2 * 10^5`
- `1 <= m <= 2 * 10^5`
- `0 <= ranked[i] <= 10^9` for `i` in `[0, n-1]`
- `0 <= player[j] <= 10^9` for `j` in `[0, m-1]`
- The existing leaderboard `ranked` is in descending order.
- The player's scores `player` are in ascending order.

## Examples

### Example 1
- Input:
  ```
  7
  100 100 50 40 40 20 10
  4
  5 25 50 120
  ```
- Output:
  ```
  6
  4
  2
  1
  ```

### Example 2
- Input:
  ```
  6
  100 90 90 80 75 60
  5
  50 65 77 90 102
  ```
- Output:
  ```
  6
  5
  4
  2
  1
  ```

## Approach

## Complexity

- Time:
- Space:
