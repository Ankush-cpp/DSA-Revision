# Arrays & Strings

A collection of classic **Arrays & Strings** problems solved during my DSA revision.

---

## Problems Solved

| LeetCode | Problem                             | Pattern                        |
|:--------:|-------------------------------------|--------------------------------|
| 1629     | Slowest Key | Array Traversal + Character Comparison                 |
| 2644     | Find the Maximum Divisibility Score | Array Traversal + Divisibility |
| 2708     | Maximum Strength of a Group         | Greedy + Sorting               |
| 2231     | Largest Number After Digit Swaps by Parity | Sorting + Parity        |
| 2529     | Maximum Count of Positive Integer and Negative Integer | Counting    |
| 2865     | Beautiful Towers I                  | Peak Enumeration + Greedy      |
| 1961 | Check If String Is a Prefix of Array | String Concatenation |
| 581 | Shortest Unsorted Continuous Subarray | Two Pointers + Min-Max Traversal |

---

# Patterns Covered

## 1. Array Traversal + Character Comparison
- LC 1629 – Slowest Key

**Learning**
- Calculate the duration of each key press using consecutive release times.
- Track the maximum duration while traversing the array.
- Handle ties using lexicographical character comparison.

---

## 2. Array Traversal + Divisibility
- LC 2644 – Find the Maximum Divisibility Score

**Learning**
- Calculate the divisibility score of each divisor.
- Check divisibility using the modulo operator.
- Track the divisor with the maximum score.
- Handle ties by choosing the smallest divisor.

## Greedy + Sorting
- LC 2708 – Maximum Strength of a Group

**Learning**
- Arrange numbers strategically to maximize the product.
- Handle positive, negative and zero values carefully.
- Use sorting to make the selection decisions easier.

## Sorting + Parity
- LC 2231 – Largest Number After Digit Swaps by Parity

**Learning**
- Separate elements according to parity.
- Sort each parity group in descending order.
- Replace digits while preserving their original parity.
- Greedily place the largest available valid digit at each position.

## Counting
- LC 2529 – Maximum Count of Positive Integer and Negative Integer

**Learning**
- Traverse the array once and maintain separate counts.
- Ignore zero because it is neither positive nor negative.
- Return the larger count.

## Peak Enumeration
- LC 2865 – Beautiful Towers I

**Learning**
- Consider each element as the peak of the mountain.
- Traverse towards the left and right while maintaining the non-increasing height condition away from the peak.
- For every chosen peak, calculate the maximum possible sum of tower heights.
- Keep track of the maximum sum obtained across all possible peaks.
- Reuse the chosen peak's height as the upper limit while determining heights on both sides.

## String Concatenation

* LC 1961 – Check If String Is a Prefix of Array

**Learning**

* Build a temporary string by concatenating array elements sequentially.
* Compare the temporary string with the target string after every concatenation.
* Return `true` when both strings become equal.
* If the temporary string becomes longer than the target string, return `false`.
* Return `false` if all array elements are processed without finding a match.

## Two Pointers + Min-Max Traversal

* LC 581 – Shortest Unsorted Continuous Subarray

**Learning**

* Traverse from left to right while maintaining the maximum element seen so far.
* If the current element is smaller than the maximum seen, update the right boundary.
* Traverse from right to left while maintaining the minimum element seen so far.
* If the current element is greater than the minimum seen, update the left boundary.
* The boundaries identify the smallest subarray that needs sorting.
* If no boundaries are found, the array is already sorted.
* Calculate the required length using the two boundaries.

---

# Complexity Summary

| Problem | Time Complexity | Space Complexity |
|---------|-----------------|------------------|
| LC 1629 | O(n)            | O(1)             |
| LC 2644 | O(n × m)        | O(1)             |
| LC 2231 | O(d log d)      | O(d)             |
| LC 2529 | O(n)            | O(1)             |
| LC 2865 | O(n²)           | O(1)             |
| LC 1961 | O(n+L)          | O(L)             |
| LC 581  | O(n)            | O(1)             |

Where:
- `n` = number of elements in the input array
- `m` = number of divisors

---

# Key Techniques Learned

- Array traversal
- Comparing consecutive elements
- Tracking maximum values
- Character comparison
- Tie-breaking conditions
- Modulo operator for divisibility
- Nested array traversal

---

# Revision Progress

- **Problems Solved:** **2**
- **Unique Patterns Covered:** **2**

## Topics Covered

- Array Traversal
- Character Comparison
- Divisibility
- Maximum Tracking
- Tie Breaking

---

> More Arrays & Strings problems will be added as I continue my DSA revision.