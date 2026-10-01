## Problems Solved

| LeetCode | Problem | Pattern |
|:--------:|---------|---------|
| 532 | K-diff Pairs in an Array | Hashing + Frequency |
| 3804 | Number of Centered Subarrays | Subarray Enumeration + Hash Set |
| 2856 | Minimum Array Length After Pair Removals | Hash Map + Frequency |

---

# Patterns Covered

## 1. Hashing + Frequency
- LC 532 – K-diff Pairs in an Array

**Learning**
- Use a hash map/set to efficiently track elements.
- Check whether the required complementary value exists.
- Handle duplicate values carefully to count unique pairs.

---

## 2. Subarray Enumeration + Hash Set
- LC 3804 – Number of Centered Subarrays

**Learning**
- Enumerate all contiguous subarrays.
- Maintain the running sum while expanding the subarray.
- Use a hash set to track elements present in the current subarray.
- Check whether the current sum exists in the subarray.

## Hash Map + Frequency
- LC 2856 – Minimum Array Length After Pair Removals

**Learning**
- Count frequencies using an `unordered_map`.
- Find the element with the maximum frequency.
- Compare its frequency with the number of remaining elements.
- Determine how many elements can be removed in pairs.
- Use frequency information instead of simulating every removal.
---

# Complexity Summary

| Problem | Time Complexity | Space Complexity |
|---------|-----------------|------------------|
| LC 532 | O(n) | O(n) |
| LC 3804 | O(n²) | O(n) |
| LC 2856 | O(n) | O(n) |

---

# Key Array Techniques Learned

- Hashing
- Frequency / presence tracking
- Duplicate handling
- Complement checking
- Subarray enumeration
- Running sum
- Hash Set
- Nested traversal

---

# Revision Progress

- **Problems Solved:** **2**
- **Unique Patterns Covered:** **2**

## Topics Covered

- Hashing + Frequency
- K-diff Pairs
- Subarray Enumeration
- Running Sum
- Hash Set

---