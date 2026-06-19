# Binary Search Revision

## Solved Problems

| LeetCode | Problem                                  | Pattern                      |
| -------- | ---------------------------------------- | ---------------------------- |
| 35       | Search Insert Position                   | Lower Bound                  |
| 744      | Find Smallest Letter Greater Than Target | First Greater Element        |
| 162      | Find Peak Element                        | Binary Search on Slope       |
| 33       | Search in Rotated Sorted Array           | Rotated Binary Search        |
| 34       | Find First and Last Position of Element  | First / Last Occurrence      |
| 532      | K-diff Pairs in an Array                 | Binary Search + Duplicates   |
| 540      | Single Element in a Sorted Array         | Pair Structure Binary Search |
| 153      | Find Minimum in Rotated Sorted Array     | Rotated Minimum              |
| 81       | Search in Rotated Sorted Array II        | Rotated Search + Duplicates  |
| 875      | Koko Eating Bananas                      | Binary Search on Answer      |
| 1011     | Capacity To Ship Packages Within D Days  | Binary Search on Answer      |

---

## Patterns Covered

### Lower Bound
* LC 35

### First Greater Element
* LC 744

### First / Last Occurrence
* LC 34

### Peak Element
* LC 162

### Rotated Array Search
* LC 33
* LC 81

### Rotated Array Minimum
* LC 153

### Pair Structure Search
* LC 540

### Binary Search + Duplicates
* LC 532

### Binary Search on Answer
*LC 875
* LC 1011
---

## Key Revision Notes

* Lower Bound ⇒ first element >= target
* Upper Bound ⇒ first element > target
* Rotated Array ⇒ one half is always sorted
* Duplicates can hide the sorted half
* When nums[low] == nums[mid] == nums[high]:

  * low++
  * high--
* Peak Element ⇒ use slope direction
* Single Element ⇒ pairing pattern breaks after answer
* If answer is monotonic:
  Binary Search on Answer can be applied.

* Search space can be:
  speed, capacity, time, distance, etc.

- Binary Search on Answer works when:

- If X works,
  then every value greater than X also works.

- This creates a monotonic search space.
---

## Revision Progress

Total Solved: 11

Topics Revised:

* Lower Bound
* First Greater Element
* First / Last Occurrence
* Peak Element
* Rotated Array Search
* Rotated Array Search with Duplicates
* Rotated Array Minimum
* Pair Structure Search
* Binary Search with Duplicates
* Binary Search on Answer