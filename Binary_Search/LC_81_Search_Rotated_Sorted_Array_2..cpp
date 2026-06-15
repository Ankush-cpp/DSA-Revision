#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return true;
        }

        // Duplicate case
        if (nums[low] == nums[mid] &&
            nums[mid] == nums[high]) {

            low++;
            high--;
        }

        // Left half sorted
        else if (nums[low] <= nums[mid]) {
            if (target >= nums[low] &&
                target < nums[mid]) {

                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        // Right half sorted
        else {
            if (target > nums[mid] &&
                target <= nums[high]) {

                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    } return false;
}

int main() {

    vector<int> nums = {2,5,6,0,0,1,2};
    int target = 0;
    cout << search(nums, target);

    return 0;
}