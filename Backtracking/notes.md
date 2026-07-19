# Backtracking

A collection of classic **Backtracking** problems solved during my DSA revision.

---

## Problems Solved

| LeetCode | Problem | Pattern |
|:--------:|---------|---------|
| 22 | Generate Parentheses | Constraint Backtracking |
| 36 | Valid Sudoku | Constraint Validation |
| 37 | Sudoku Solver | Grid Backtracking |
| 39 | Combination Sum | Take / Not Take |
| 40 | Combination Sum II | Duplicate Handling |
| 46 | Permutations | Visited Array |
| 78 | Subsets | Take / Not Take |
| 79 | Word Search | Grid DFS + Backtracking |
| 93 | Restore IP Addresses | Partition + Validation |
| 131 | Palindrome Partitioning | Partition Backtracking |

---

# Patterns Covered

## 1. Constraint Backtracking
- LC 22 – Generate Parentheses

**Learning**
- Build only valid states.
- Use constraints to prune invalid recursion.
- Avoid generating unnecessary possibilities.

---

## 2. Take / Not Take
- LC 39 – Combination Sum
- LC 78 – Subsets

**Learning**
- Every element has two choices:
  - Take
  - Skip
- Foundation of many recursion problems.

---

## 3. Duplicate Handling
- LC 40 – Combination Sum II

**Learning**
- Sort the array first.
- Skip duplicates at the same recursion level.
- Each element is used only once.

---

## 4. Permutation Generation
- LC 46 – Permutations

**Learning**
- Track visited elements.
- Generate every possible ordering.

---

## 5. Grid DFS + Backtracking
- LC 79 – Word Search

**Learning**
- Explore 4 directions.
- Mark the current cell as visited.
- Restore it while backtracking.

---

## 6. Partition Backtracking
- LC 131 – Palindrome Partitioning

**Learning**
- Generate every possible partition.
- Continue recursion only if the current substring satisfies the required property (Palindrome).

---

## 7. Partition + Validation
- LC 93 – Restore IP Addresses

**Learning**
- Split the string into exactly 4 parts.
- Validate every partition before recursion.
- Reject leading zeros and numbers greater than 255.

---

## 8. Constraint Validation
- LC 36 – Valid Sudoku

**Learning**
- Validate rows, columns and 3×3 boxes.
- Reuse the same validation logic used in Sudoku Solver.

---

## 9. Grid Constraint Backtracking
- LC 37 – Sudoku Solver

**Learning**
- Find an empty cell.
- Try every valid digit.
- Recurse.
- Backtrack on failure.

---

# Complexity Summary

| Problem | Time Complexity | Space Complexity |
|---------|-----------------|------------------|
| LC 22 | O(4ⁿ / √n) | O(n) |
| LC 36 | O(1) | O(1) |
| LC 37 | Exponential | O(81) recursion stack |
| LC 39 | Exponential | O(target) |
| LC 40 | Exponential | O(n) |
| LC 46 | O(n × n!) | O(n) |
| LC 78 | O(2ⁿ × n) | O(n) |
| LC 79 | O(m × n × 4ᴸ) | O(L) |
| LC 93 | O(3⁴) ≈ O(1) | O(4) |
| LC 131 | O(n × 2ⁿ) | O(n) |

---

# Key Backtracking Techniques Learned

- Recursive state exploration
- Decision tree traversal
- Backtracking (Undo changes)
- Constraint-based pruning
- Take / Not Take recursion
- Duplicate handling
- Grid DFS
- Partition recursion
- Validation before recursion
- Visited array technique

---

# Revision Progress

- **Problems Solved:** **10**
- **Unique Patterns Covered:** **9**

## Topics Mastered

- Constraint Backtracking
- Take / Not Take
- Duplicate Handling
- Permutations
- Grid DFS + Backtracking
- Partition Backtracking
- Partition + Validation
- Constraint Validation
- Grid Constraint Backtracking

---

> More Backtracking problems will be added as I continue my DSA revision.