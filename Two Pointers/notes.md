# Two Pointers

A collection of **Two Pointer** problems solved during my DSA revision.

This marks the beginning of my **Two Pointer** revision journey.

---

## Problems Solved

| LeetCode | Problem | Pattern |
|:--------:|---------|---------|
| 3936 | Minimum Swaps to Move Zeros to End | Two Pointers |

---

# Patterns Covered

## 1. Two Pointers

### LC 3936 – Minimum Swaps to Move Zeros to End

**Approach**

- Use two pointers starting from opposite ends of the array.
- `i` searches for a `0` from the left.
- `j` searches for a non-zero element from the right.
- When both are found, swap them.
- Move both pointers inward and count the swap.

**Learning**

- Two pointers can reduce unnecessary traversal.
- Opposite-direction pointers are useful when elements need to be moved toward a particular side.
- Avoid physically processing elements that are already in their correct region.
- Each valid swap moves both pointers forward.

---

# Complexity Summary

| Problem | Time Complexity | Space Complexity |
|---------|-----------------|------------------|
| LC 3936 | O(n) | O(1) |

---

# Key Two Pointer Techniques Learned

- Opposite-direction pointers
- Left and right boundary scanning
- In-place swapping
- Pointer movement based on conditions
- Avoiding unnecessary swaps
- Constant-space array manipulation

---

# Revision Progress

- **Problems Solved:** **1**
- **Unique Patterns Covered:** **1**

## Topics Covered

- Two Pointers
- Opposite Direction Traversal
- In-place Swapping
- Array Manipulation

---

> More Two Pointer problems will be added as I continue my DSA revision.