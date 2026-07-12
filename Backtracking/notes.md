# Backtracking Revision

## Solved Problems

| LeetCode | Problem         | Pattern                            |
| -------- | --------------- | ---------------------------------- |
| 39       | Combination Sum | Take / Not Take + Backtracking     |
| 46       | Permutations    | Backtracking + Visited Array       |
| 78       | Subsets         | Take / Not Take                    |
| 36       | Valid Sudoku    | Hashing / Matrix Validation        |
| 37       | Sudoku Solver   | Backtracking + Constraint Checking |

---

## Patterns Covered

### Take / Not Take

* LC 39
* LC 78

### Permutation Generation

* LC 46

### Constraint Validation

* LC 36

### Grid Backtracking

* LC 37

---

## Key Learning

### LC 36
- Temporarily remove the current digit.
- Reuse the `isSafe()` function to validate:
  - Row
  - Column
  - 3×3 subgrid
- Restore the digit after validation.

### LC 37

* Find an empty cell.
* Try digits from 1 to 9.
* Place a valid digit.
* Recurse.
* Backtrack if needed.

---

## Complexity

| Problem | Time                     | Space                 |
| ------- | ------------------------ | --------------------- |
| LC 39   | Exponential              | O(target)             |
| LC 46   | O(n × n!)                | O(n)                  |
| LC 78   | O(2ⁿ × n)                | O(n)                  |
| LC 36   | O(1) (fixed 9×9 board)   | O(1)                  |
| LC 37   | Exponential (worst case) | O(81) recursion depth |

---

## Revision Progress

Total Solved: 5
