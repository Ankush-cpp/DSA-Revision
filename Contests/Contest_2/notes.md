# Second LeetCode Contest

## Problems Solved

| LC No. | Problem                                  | Difficulty | Pattern          |
| ------ | ---------------------------------------- | ---------- | ---------------- |
| 3974   | Maximum Total Sum of K Selected Elements | Medium     | Greedy + Sorting |

## Approach

* Sort the array in ascending order.
* Select the largest `k` elements.
* Process them from largest to smallest.
* Multiply each selected element with the current multiplier.
* If the multiplier becomes `0`, use `1` instead.
* Accumulate the total sum.

## Complexity

* Time: **O(n log n)**
* Space: **O(1)** (excluding sorting)

## Learnings

* Greedy strategy after sorting.
* Careful handling of changing multiplier values.
* First implementation solved during the second LeetCode contest.

## Result

* Contest: 2
* Problems Solved: 1
* Difficulty: Medium

## Next Goal

* Solve at least 2 problems in the next contest.
* Improve implementation speed.
