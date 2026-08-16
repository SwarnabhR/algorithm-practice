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

The `tests/` folders are gitignored — they are generated locally (e.g. by the
scaffolder agent in `.opencode/agent/draft-tests.md`, which works for any
platform) and are not committed.

### LeetCode (class-based)

LeetCode folders are named `<problemId>_<slug>` (e.g. `1_two_sum`). The
`solution.cpp` holds only the LeetCode-style class with an empty body:

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    }
};
```

The unified harness lives in `template/leetcode/main.cpp` — ONE fixed file for
every LeetCode problem (never edited). It provides `#include <bits/stdc++.h>`,
`using namespace std;`, fast I/O, includes `solution.cpp`, and calls `solve()`.

The glue is generated automatically at build time by the auto-runner
(`tools/runner.py`):

1. Parses the method signature out of `solution.cpp`.
2. Analyzes `tests/*.in` — detects value types (int/float/char/string) and the
   layout (counts + scalars first, then array data).
3. Generates `solve()` (parse stdin -> call the method -> print the result),
   splices it into the harness, and compiles with `-O2` and `-I<problemDir>`.

You never write or see the glue — only the class body in `solution.cpp` and the
`tests/` files. The `.in` layout the analyzer understands:

- array + scalar : first line `n <scalar>`, then the n values
- single array   : first line `n`, then the n values
- matrix         : first line `m n`, then the m*n values
- strings        : one string per line (or whitespace-separated tokens)

`.out` files hold the expected stdout: space-separated values on one line;
`bool` prints `true`/`false`; `void` prints nothing.

### Other platforms (single-file)

`solution.cpp` is a self-contained program — the user writes everything,
including `main()`.

## Running tests

With a problem's solution file open in VS Code, run the **Run Tests** task via
`Ctrl+Alt+T`, or through the command palette (`Tasks: Run Test Task`). It
builds the open file to `build/<problem>.exe` (incrementally — skipped when
nothing changed), then runs the executable against every `N.in` in the sibling
`tests/` folder and diffs the output against `N.out`, printing PASS/FAIL per
case.

The build (`.vscode/build.ps1`) is automatic: for LeetCode problems it runs
`tools/runner.py` (auto-generates the glue, compiles with `-O2` and
`-I<problemDir>`); for other platforms it compiles the open file directly
(also `-O2`).

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