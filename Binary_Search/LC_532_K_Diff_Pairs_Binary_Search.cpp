#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findPairs(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        int target = nums[i] + k;
        int low = i + 1;
        int high = nums.size() - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                count++;
                break;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    } return count;
}

int main() {

    vector<int> nums = {3,1,4,1,5};
    int k = 2;
    cout << findPairs(nums, k);
    return 0;
}