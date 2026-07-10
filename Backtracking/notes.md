# Backtracking Revision

## Solved Problems

| LeetCode | Problem         | Pattern                        |
| -------- | --------------- | ------------------------------ |
| 39       | Combination Sum | Take / Not Take + Backtracking |
| 46       | Permutations    | Backtracking + Visited Array   |
| 78       | Subsets         | Take / Not Take                |

---

## Patterns Covered

### Take / Not Take

* LC 39
* LC 78

### Permutation Generation

* LC 46

### Backtracking

* Choose
* Explore
* Undo (Backtrack)

---

## Key Learning

### LC 39

* Same element can be chosen multiple times.
* Stay on the same index after taking an element.

### LC 46

* Every element can be used only once.
* Track used elements with a visited array.
* Backtrack after each recursive call.

### LC 78

* Every element has two choices:

  * Include
  * Exclude

---

## Complexity

| Problem | Time        | Space                     |
| ------- | ----------- | ------------------------- |
| LC 39   | Exponential | O(target) recursion depth |
| LC 46   | O(n × n!)   | O(n) recursion depth      |
| LC 78   | O(2ⁿ × n)   | O(n) recursion depth      |

---

## Revision Progress

Total Solved: 3