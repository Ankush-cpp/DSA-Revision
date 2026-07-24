#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        long long ans = 0;
        for (int left = 0; left < n; left++) {
            int targetCount = 0;
            for (int right = left; right < n; right++) {
                if (nums[right] == target) {
                    targetCount++;
                }
                int length = right - left + 1;
                if (targetCount > length / 2) {
                    ans++;
                }
            }
        } return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 3};
    int target = 2;
    Solution obj;
    cout << obj.countMajoritySubarrays(nums, target);
    return 0;
}