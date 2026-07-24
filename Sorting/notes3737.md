### LC 3737 - Count Majority Subarrays

- Generate every possible subarray.
- Maintain the frequency of the target element while expanding the right pointer.
- Count the subarray if:

  targetCount > subarrayLength / 2

- This is the straightforward brute-force solution used to understand the problem before optimization.