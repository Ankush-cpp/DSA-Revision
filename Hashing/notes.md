# LC 532 - K-diff Pairs in an Array

## Approach
- Store frequencies in hashmap
- For k = 0:
  - Count elements with frequency > 1
- For k > 0:
  - Check if num + k exists

## Complexity

- Time: O(n)
- Space: O(n)

## Key Learning

Hashing provides an efficient lookup-based solution.