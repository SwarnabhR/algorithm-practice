# Designer PDF Viewer

Algorithms > Implementation

## Problem Statement

When a contiguous block of text is selected in a PDF viewer, the selection is highlighted with a blue rectangle. In this PDF viewer, each word is highlighted independently.

There is a list of `26` character heights aligned by index to their letters (`'a'` is index `0`, `'z'` is index `25`). Given the letter heights and a word, determine the area of the highlighted rectangle, in square units, assuming all letters are `1` unit wide. The rectangle's height equals the tallest letter in the word, and its width equals the number of letters in the word.

### Function Description

Complete the `designerPdfViewer` function with the following parameter(s):
- `int h[26]`: the heights of each letter
- `string word`: a string

**Returns**: `int` — the size of the highlighted area

### Input Format

The first line contains `26` space-separated integers describing the respective heights of each consecutive lowercase English letter, `h[a..z]`.

The second line contains a single word consisting of lowercase English alphabetic letters.

### Constraints

- `1 <= h[i] <= 10`, where `i` is an English lowercase letter index (`0-25`)
- `word` contains no more than `10^5` letters

## Examples

### Example 1
- Input:
  ```
  1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
  abc
  ```
- Output:
  ```
  9
  ```
- Explanation: The letter heights are `a = 1`, `b = 3`, `c = 1`. The tallest letter is `b` at `3` units, and the word is `3` letters wide, so the area is `3 * 3 = 9`.

### Example 2
- Input:
  ```
  1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 7
  zaba
  ```
- Output:
  ```
  28
  ```
- Explanation: The tallest letter in `zaba` is `z` at `7` units, and the word is `4` letters wide, so the area is `7 * 4 = 28`.

## Approach

## Complexity

- Time:
- Space:
