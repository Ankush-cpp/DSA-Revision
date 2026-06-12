# Binary Search Revision

## LC 35 - Search Insert Position
Pattern:
- Lower Bound

Key Learning:
- low becomes insertion position.

---

## LC 744 - Find Smallest Letter Greater Than Target
Pattern:
- First Greater Element

Key Learning:
- Wrap around using low % n.

---

## LC 162 - Find Peak Element
Pattern:
- Binary Search on slope

Key Learning:
- Binary Search can work without a fully sorted array.

---

## LC 33 - Search in Rotated Sorted Array
Pattern:
- Rotated Binary Search

Key Learning:
- At least one half is always sorted.

# LC 34 - Find First and Last Position of Element in Sorted Array

## Topic
Binary Search

## Approach

- Use Binary Search twice:
  1. Find first occurrence
  2. Find last occurrence

## Complexity

- Time: O(log n)
- Space: O(1)

## Key Learning

When target is found:

- For first occurrence:
  move left (high = mid - 1)

- For last occurrence:
  move right (low = mid + 1)

This pattern is frequently used in interview questions involving duplicates.