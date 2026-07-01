# Intervals Revision

## Solved Problems

| LeetCode | Problem         | Pattern          |
| -------- | --------------- | ---------------- |
| 56       | Merge Intervals | Interval Merging |

---

## Patterns Covered

### Interval Merging

* LC 56

---

## Key Learning

* Sort intervals by starting time.
* If the current interval overlaps with the last merged interval:

  * Extend the end point.
* Otherwise:

  * Start a new merged interval.

---

## Complexity

* Time: **O(n log n)** (sorting)
* Space: **O(n)**

---

## Revision Progress

Total Solved: 1
