# First LeetCode Contest

## Problems Solved

| LC No. | Problem                                    | Difficulty |
| ------ | ------------------------------------------ | ---------- |
| 3968   | Maximum Manhattan Distance After All Moves | Medium     |
| 3969   | Valid Subarrays With Matching Sum Digits I | Medium     |

## Approaches

### LC 3968

* Count U, D, L, R moves.
* Treat every '_' as a move that increases the Manhattan distance.
* Final Answer:
  abs(U - D) + abs(L - R) + wildcards

### LC 3969

* Generate all subarrays.
* Compute subarray sums.
* Check:

  * First digit == x
  * Last digit == x

## Learnings

* First contest participation.
* Solved 2 medium problems.
* Practiced implementation under time pressure.

## Next Goal

* Solve 3+ problems in a contest.
* Improve speed and pattern recognition.
