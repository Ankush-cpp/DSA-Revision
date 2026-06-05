# LC 744 - Find Smallest Letter Greater Than Target

## Topic
Binary Search

## Approach

- Apply binary search
- Search for first character greater than target
- If no such character exists:
  - Return first character (wrap around)

## Complexity

- Time: O(log n)
- Space: O(1)

## Key Learning

This is a classic "first greater element" binary search problem.

The expression:

low % letters.size()

handles the wrap-around condition.