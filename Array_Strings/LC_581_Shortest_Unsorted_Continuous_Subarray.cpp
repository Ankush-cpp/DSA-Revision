#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = -1, right = -1;
        int maxSeen = nums[0];
        int minSeen = nums[n - 1];
        // Find the right boundary
        for (int i = 1; i < n; i++) {
            maxSeen = max(maxSeen, nums[i]);

            if (nums[i] < maxSeen) {
                right = i;
            }
        }
        // Find the left boundary
        for (int i = n - 2; i >= 0; i--) {
            minSeen = min(minSeen, nums[i]);

            if (nums[i] > minSeen) {
                left = i;
            }
        }
        if (left == -1) {
            return 0;
        } return right - left + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 6, 4, 8, 10, 9, 15};
    cout << "Shortest Unsorted Subarray Length: " << sol.findUnsortedSubarray(nums) << endl;
    return 0;
}