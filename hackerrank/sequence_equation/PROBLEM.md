# Sequence Equation

Algorithms > Implementation

## Problem Statement

Given a permutation `p` of the integers from `1` to `n`, find `y` for each `x` from `1` to `n` such that:

```text
p[p[y]] = x
```

Print each resulting `y` on a new line.

## Function Description

Complete the `permutationEquation` function with the following parameter:

- `int p[n]`: a permutation of the integers from `1` to `n`

**Returns**: `int[n]` - the values of `y` for each `x` from `1` to `n`

## Input Format

The first line contains an integer `n`, the number of elements in the sequence.

The second line contains `n` space-separated integers, the values of `p`.

## Output Format

Print `n` lines. For each `x` from `1` to `n`, print the corresponding value of `y` on a new line.

## Constraints

- `1 <= n <= 50`
- `1 <= p[i] <= 50`
- Each element in `p` is distinct.

## Examples

### Sample Input 0

```text
3
2 3 1
```

### Sample Output 0

```text
2
3
1
```

### Explanation 0

For each `x` from `1` to `3`, find `y` such that `p[p[y]] = x`.

### Sample Input 1

```text
5
4 3 5 1 2
```

### Sample Output 1

```text
1
3
5
4
2
```

## Approach

Store the 1-based index of every value in `p`.

For each `x`, the value `position[x]` is the index where `x` appears. Applying the inverse lookup one more time gives the answer:

```text
y = position[position[x]]
```

## Complexity

- Time: `O(n)`
- Space: `O(n)`
