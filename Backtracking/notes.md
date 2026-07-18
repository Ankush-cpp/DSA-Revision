# Backtracking Revision

## Solved Problems

| LeetCode | Problem | Pattern |
|-----------|----------|----------|
| 22 | Generate Parentheses | Constraint Backtracking |
| 36 | Valid Sudoku | Constraint Validation |
| 37 | Sudoku Solver | Grid Backtracking |
| 39 | Combination Sum | Take / Not Take |
| 40 | Combination Sum II | Duplicate Handling |
| 46 | Permutations | Visited Array |
| 78 | Subsets | Take / Not Take |
| 79 | Word Search | Grid DFS + Backtracking |
| 131 | Palindrome Partitioning | Partition Backtracking |

---

## Patterns Covered

### Constraint Backtracking
- LC 22

### Take / Not Take
- LC 39
- LC 78

### Duplicate Handling
- LC 40

### Permutations
- LC 46

### Grid DFS + Backtracking
- LC 79

### Partition Backtracking
- LC 131

### Constraint Validation
- LC 36

### Grid Backtracking
- LC 37

---

## Key Learning

### LC 22
- Maintain counts of opening and closing brackets.
- Add '(' if `open < n`.
- Add ')' only if `close < open`.
- Prune invalid states instead of generating all possibilities.

### LC 36
- Temporarily remove the current digit.
- Validate the row, column and 3×3 subgrid using the same `isSafe()` logic as Sudoku Solver.

### LC 37
- Find an empty cell.
- Try digits from 1 to 9.
- Place a valid digit.
- Recurse.
- Backtrack if needed.

### LC 39
- Reuse the same element multiple times.
- Backtrack after exploring each choice.

### LC 40
- Sort the array first.
- Skip duplicates at the same recursion level.
- Each element can be used only once.

### LC 46
- Use a visited array.
- Generate every permutation through backtracking.

### LC 78
- Include or exclude every element.
- Classic Take / Not Take recursion.

### LC 79
- Explore all four directions.
- Mark the current cell as visited.
- Restore the cell while backtracking.

### LC 131
- Try every possible partition.
- Continue recursion only if the current substring is a palindrome.

---

## Complexity

| Problem | Time | Space |
|----------|------|-------|
| LC 22 | O(4ⁿ / √n) | O(n) |
| LC 36 | O(1) | O(1) |
| LC 37 | Exponential | O(81) recursion depth |
| LC 39 | Exponential | O(target) |
| LC 40 | Exponential | O(n) recursion depth |
| LC 46 | O(n × n!) | O(n) |
| LC 78 | O(2ⁿ × n) | O(n) |
| LC 79 | O(m × n × 4ᴸ) | O(L) |
| LC 131 | O(n × 2ⁿ) | O(n) recursion depth |

---

## Revision Progress

- ✅ Total Solved: **9**

### Patterns Mastered

- ✅ Constraint Backtracking
- ✅ Take / Not Take
- ✅ Duplicate Handling
- ✅ Permutations
- ✅ Grid DFS + Backtracking
- ✅ Partition Backtracking
- ✅ Constraint Validation
- ✅ Grid Backtracking