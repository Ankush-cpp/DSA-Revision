#include <iostream>
#include <vector>
using namespace std;

bool check(long long sum, int x) {
    if (sum % 10 != x) {
        return false;
    }
    long long temp = sum;
    while (temp >= 10) {
        temp /= 10;
    } return temp == x;
}

int countValidSubarrays(vector<int>& nums, int x) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        long long sum = 0;
        for (int j = i; j < nums.size(); j++) {

            sum += nums[j];

            if (check(sum, x)) {
                count++;
            }
        }
    } return count;
}

int main() {
    vector<int> nums = {1, 100, 1};
    int x = 1;
    cout << countValidSubarrays(nums, x);
    return 0;
}