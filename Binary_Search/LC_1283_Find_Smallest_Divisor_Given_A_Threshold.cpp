#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool possible(vector<int>& nums, int threshold, int divisor) {
    long long sum = 0;
    for (int num : nums) {
        sum += ceil((double)num / divisor);
    } return sum <= threshold;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (possible(nums, threshold, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    } return ans;
}

int main() {
    vector<int> nums = {1,2,5,9};
    int threshold = 6;
    cout << smallestDivisor(nums, threshold);
    return 0;
}