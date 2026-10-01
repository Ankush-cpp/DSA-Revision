#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    LeetCode 2529 - Maximum Count of Positive Integer and Negative Integer
    Approach:
    - Count the number of negative integers.
    - Count the number of positive integers.
    - Ignore zero.
    - Return the larger of the two counts.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
int maximumCount(vector<int>& nums) {
    int negativeCount = 0;
    int positiveCount = 0;
    for (int num : nums) {
        if (num < 0) {
            negativeCount++;
        }
        else if (num > 0) {
            positiveCount++;
        }
    }
    return max(negativeCount, positiveCount);
}

int main() {
    /*
        Input:
        [-2, -1, -1, 1, 2, 3]

        Negative count = 3
        Positive count = 3

        Output: 3
    */
    vector<int> nums = {-2, -1, -1, 1, 2, 3};
    cout << "Maximum Count: " << maximumCount(nums) << endl;
    return 0;
}