#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxDigitRange(vector<int>& nums) {
    int maxRange = -1;
    int sum = 0;
    for (int num : nums) {
        int temp = num;
        int maxDigit = 0;
        int minDigit = 9;
        if (temp == 0) {
            maxDigit = minDigit = 0;
        }
        while (temp > 0) {
            int digit = temp % 10;
            maxDigit = max(maxDigit, digit);
            minDigit = min(minDigit, digit);
            temp /= 10;
        }
        int range = maxDigit - minDigit;
        if (range > maxRange) {
            maxRange = range;
            sum = num;
        }
        else if (range == maxRange) {
            sum += num;
        }
    } return sum;
}

int main() {
    vector<int> nums = {5724, 91, 808, 456};
    cout << maxDigitRange(nums);
    return 0;
}