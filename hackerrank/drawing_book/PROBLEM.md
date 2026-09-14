# Drawing Book

Algorithms > Implementation

## Problem Statement

A teacher asks the class to open their books to a page number. A student can either start turning pages from the front of the book or from the back of the book. They always turn pages one at a time. When they open the book, page `1` is always on the right side. When they flip page `1`, they see pages `2` and `3`. Each page except the last page will always be printed on both sides. The last page may only be printed on the front, given the length of the book. If the book is `n` pages long, and a student wants to turn to page `p`, what is the minimum number of pages to turn? They can start at the beginning or the end of the book.

Given `n` and `p`, find and print the minimum number of pages that must be turned in order to arrive at page `p`.

### Function Description

Complete the `pageCount` function with the following parameter(s):
- `int n`: the number of pages in the book
- `int p`: the page number to turn to

**Returns**: `int` — the minimum number of pages to turn

### Input Format

The first line contains an integer `n`, the number of pages in the book.
The second line contains an integer, `p`, the page to turn to.

### Constraints

`1 <= n <= 10^5`
`1 <= p <= n`

## Examples

### Example 1
- Input:
  ```
  6
  2
  ```
- Output:
  ```
  1
  ```
- Explanation: Starting from the front (page `1`), turning `1` page reaches page `2`. Starting from the back (page `6`), it takes `2` pages. Minimum is `1`.

### Example 2
- Input:
  ```
  5
  4
  ```
- Output:
  ```
  0
  ```
- Explanation: Starting from the front, it takes `2` pages to reach page `4`. Starting from the back (page `5`), `0` pages are needed since page `4` is already visible. Minimum is `0`.

## Approach

## Complexity

- Time:
- Space:
