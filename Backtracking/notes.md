# Backtracking Revision

## Solved Problems

| LeetCode | Problem            | Pattern                           |
| -------- | ------------------ | --------------------------------- |
| 39       | Combination Sum    | Take / Not Take + Backtracking    |
| 40       | Combination Sum II | Backtracking + Duplicate Handling |
| 46       | Permutations       | Backtracking + Visited Array      |
| 78       | Subsets            | Take / Not Take                   |
| 36       | Valid Sudoku       | Constraint Validation             |
| 37       | Sudoku Solver      | Grid Backtracking                 |

---

## Patterns Covered

### Take / Not Take

* LC 39
* LC 78

### Duplicate Handling

* LC 40

### Permutation Generation

* LC 46

### Constraint Validation

* LC 36

### Grid Backtracking

* LC 37

---

## Key Learning

### LC 39

* Same element can be chosen multiple times.

### LC 40

* Each element can be used only once.
* Sort the array first.
* Skip duplicates using:
  `if (i > index && candidates[i] == candidates[i - 1]) continue;`

### LC 46

* Use a visited array to generate permutations.

### LC 78

* Include / Exclude every element.

### LC 36

* Validate rows, columns and 3×3 subgrids.

### LC 37

* Try every valid digit.
* Backtrack on failure.

---

## Complexity

| Problem | Time        | Space                 |
| ------- | ----------- | --------------------- |
| LC 39   | Exponential | O(target)             |
| LC 40   | Exponential | O(n) recursion depth  |
| LC 46   | O(n × n!)   | O(n)                  |
| LC 78   | O(2ⁿ × n)   | O(n)                  |
| LC 36   | O(1)        | O(1)                  |
| LC 37   | Exponential | O(81) recursion depth |

---

## Revision Progress

Total Solved: 6
