#include <iostream>
#include <vector>
using namespace std;

/*
    LeetCode 3936 - Minimum Swaps to Move Zeros to End

    Approach:
    Use two pointers:
    - i searches for a zero from the left.
    - j searches for a non-zero element from the right.
    - Swap them whenever both are found.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

int minSwaps(vector<int>& nums) {
    int i = 0;
    int j = nums.size() - 1;
    int count = 0;

    while (i < j) {

        while (i < j && nums[i] != 0) {
            i++;
        }

        while (i < j && nums[j] == 0) {
            j--;
        }

        if (i < j) {
            swap(nums[i], nums[j]);
            count++;
            i++;
            j--;
        }
    }

    return count;
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Minimum swaps: "
         << minSwaps(nums) << endl;

    return 0;
}