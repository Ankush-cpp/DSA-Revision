# Backtracking Revision

## Solved Problems

| LeetCode | Problem                 | Pattern                        |
| -------- | ----------------------- | ------------------------------ |
| 39       | Combination Sum         | Take / Not Take + Backtracking |
| 40       | Combination Sum II      | Duplicate Handling             |
| 46       | Permutations            | Visited Array                  |
| 78       | Subsets                 | Take / Not Take                |
| 131      | Palindrome Partitioning | Partition Backtracking         |
| 36       | Valid Sudoku            | Constraint Validation          |
| 37       | Sudoku Solver           | Grid Backtracking              |

---

## Patterns Covered

### Take / Not Take

* LC 39
* LC 78

### Duplicate Handling

* LC 40

### Permutations

* LC 46

### Partition Backtracking

* LC 131

### Constraint Validation

* LC 36

### Grid Backtracking

* LC 37

---

## Key Learning

### LC 39

* Reuse the same element multiple times.

### LC 40

* Sort the array.
* Skip duplicates at the same recursion level.

### LC 46

* Use a visited array.

### LC 78

* Include / Exclude every element.

### LC 131

* Try every possible partition.
* Continue recursion only if the current substring is a palindrome.

### LC 36

* Validate rows, columns and 3×3 subgrids.

### LC 37

* Place a valid digit.
* Recurse.
* Backtrack on failure.

---

## Complexity

| Problem | Time                   | Space                 |
| ------- | ---------------------- | --------------------- |
| LC 39   | Exponential            | O(target)             |
| LC 40   | Exponential            | O(n)                  |
| LC 46   | O(n × n!)              | O(n)                  |
| LC 78   | O(2ⁿ × n)              | O(n)                  |
| LC 131  | O(n × 2ⁿ) (worst case) | O(n) recursion depth  |
| LC 36   | O(1)                   | O(1)                  |
| LC 37   | Exponential            | O(81) recursion depth |

---

## Revision Progress

Total Solved: 7
