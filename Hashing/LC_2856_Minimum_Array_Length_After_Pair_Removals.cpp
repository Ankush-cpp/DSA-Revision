#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

/*
    LeetCode 2856 - Minimum Array Length After Pair Removals

    Approach:
    - Count the frequency of every element using an unordered_map.
    - Find the maximum frequency.
    - Pair elements of different values and remove them.
    - The remaining length depends on whether one value occurs
      more than half of the array.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

int minLengthAfterRemovals(vector<int>& nums) {
    unordered_map<int, int> frequency;
    for (int num : nums) {
        frequency[num]++;
    }
    int n = nums.size();
    int maxFrequency = 0;
    for (auto& pair : frequency) {
        maxFrequency = max(maxFrequency, pair.second);
    }
    if (maxFrequency > n - maxFrequency) {
        return maxFrequency - (n - maxFrequency);
    }
    return n % 2;
}

int main() {
    /*
        Input:
        [1, 3, 3, 2, 3, 2]

        Frequencies:
        1 -> 1
        2 -> 2
        3 -> 3

        Maximum frequency = 3
        Other elements = 3

        Minimum remaining length = 0
    */

    vector<int> nums = {1, 3, 3, 2, 3, 2};

    cout << "Minimum Array Length: "
         << minLengthAfterRemovals(nums) << endl;
    return 0;
}