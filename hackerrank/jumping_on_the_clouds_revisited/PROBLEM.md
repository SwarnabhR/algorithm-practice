# Jumping on the Clouds: Revisited

Algorithms > Implementation

## Problem Statement

A child is playing a cloud hopping game. The clouds are sequentially numbered and may be either cumulus clouds or thunderheads. The character starts at cloud `0` with an energy level of `100`.

On each move, the character jumps forward by `k` clouds. The next cloud index is calculated with modulo arithmetic:

```text
(current_position + k) % n
```

Each jump costs `1` energy. If the character lands on a thunderhead cloud, `c[i] = 1`, it loses `2` additional energy. The game ends when the character lands back on cloud `0`.

Given `n`, `k`, and the cloud configuration `c`, determine the final energy level.

## Function Description

Complete the `jumpingOnClouds` function with the following parameters:

- `int c[n]`: the cloud types along the path
- `int k`: the length of one jump

**Returns**: `int` - the remaining energy level

## Input Format

The first line contains two space-separated integers, `n` and `k`, where:

- `n` is the number of clouds
- `k` is the jump distance

The second line contains `n` space-separated integers, `c[i]`, where:

- `0` means cloud `i` is a cumulus cloud
- `1` means cloud `i` is a thunderhead

## Output Format

Print a single integer: the final energy level after the character returns to cloud `0`.

## Constraints

- `2 <= n <= 25`
- `1 <= k <= n`
- `n % k = 0`
- `c[i]` is either `0` or `1`

## Examples

### Sample Input

```text
8 2
0 0 1 0 0 1 1 0
```

### Sample Output

```text
92
```

### Explanation

The character starts with `100` energy and jumps through the path:

```text
0 -> 2 -> 4 -> 6 -> 0
```

Each jump costs `1` energy. The character lands on two thunderheads, clouds `2` and `6`, and each thunderhead costs `2` additional energy.

Total energy lost:

```text
4 jumps + 4 thunderhead penalty = 8
```

Final energy:

```text
100 - 8 = 92
```

## Approach

Start with `100` energy and repeatedly move to `(position + k) % n`. After each jump, subtract `1` energy, and subtract `2` more if the destination cloud is a thunderhead. Stop once the position returns to `0`.

## Complexity

- Time: `O(n / k)`
- Space: `O(1)`
