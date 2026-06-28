#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maxSum(vector<int>& nums, int k, int mul) {
    sort(nums.begin(), nums.end());
    long long totalSum = 0;
    int index = nums.size() - 1;

    while (k--) {
        if (mul == 0) {
            mul = 1;
        }
        totalSum += 1LL * nums[index] * mul;
        index--;
        mul--;
    } return totalSum;
}

int main() {
    vector<int> nums = {6, 1, 2, 9};
    int k = 3;
    int mul = 2;
    cout << maxSum(nums, k, mul);
    return 0;
}