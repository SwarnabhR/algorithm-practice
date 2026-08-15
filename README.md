# Algorithm Practice

My solutions and notes for algorithmic problem solving.

## Platforms

- LeetCode
- Codeforces
- AtCoder
- CSES

## Structure

Each platform folder (e.g. `cses/`) contains one subfolder per problem. A problem
folder holds the solution source file plus a `tests/` folder with numbered
input/expected-output pairs:

```
cses/
  problem-name/
    solution.cpp
    tests/
      1.in
      1.out
      2.in
      2.out
```

## Running tests

With a problem's solution file open in VS Code, run the **Run Tests** task via
`Ctrl+Alt+T`, or through the command palette (`Tasks: Run Test Task`). It
builds the open file to `build/main.exe`, then runs the executable against
every `N.in` in the sibling `tests/` folder and diffs the output against
`N.out`, printing PASS/FAIL per case.

## Topics

- Arrays
- Strings
- Binary Search
- Two Pointers
- Sliding Window
- Linked Lists
- Trees
- Graphs
- Dynamic Programming
- Greedy
- Backtracking
- Number Theory
- Data Structures