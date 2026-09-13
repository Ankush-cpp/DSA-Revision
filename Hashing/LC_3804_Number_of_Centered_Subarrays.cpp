#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
    LeetCode 3804 - Number of Centered Subarrays

    Approach:
    Enumerate every possible subarray.
    Maintain its running sum and the elements present in it.
    If the running sum is present in the subarray, it is centered.

    Time Complexity: O(n^2)
    Space Complexity: O(n)
*/

int centeredSubarrays(vector<int>& nums) {
    int n = nums.size();
    int answer = 0;

    for (int i = 0; i < n; i++) {
        unordered_set<int> elements;
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += nums[j];
            elements.insert(nums[j]);

            if (elements.count(sum)) {
                answer++;
            }
        }
    }

    return answer;
}

int main() {
    vector<int> nums = {-1, 1, 0};

    cout << "Number of centered subarrays: "
         << centeredSubarrays(nums) << endl;

    return 0;
}