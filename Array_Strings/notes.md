# LeetCode 1629 — Slowest Key

## Problem
Given the release time of each key and the sequence of keys pressed,
find the key that had the longest press duration.

If multiple keys have the same maximum duration, return the
lexicographically largest key.

## Approach

- The first key's duration is `releaseTimes[0]`.
- For every subsequent key, calculate its duration as:

  `releaseTimes[i] - releaseTimes[i - 1]`

- Keep track of the maximum duration.
- If two keys have the same duration, choose the lexicographically
  larger character.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Key Learning

The duration of a key press depends on the difference between its
release time and the previous key's release time.