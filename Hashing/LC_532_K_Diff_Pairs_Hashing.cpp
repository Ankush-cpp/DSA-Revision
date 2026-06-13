#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findPairs(vector<int>& nums, int k) {

    unordered_map<int, int> freq;

    for (int num : nums) {
        freq[num]++;
    }

    int count = 0;

    for (auto& it : freq) {

        int num = it.first;

        if (k == 0) {
            if (it.second > 1) {
                count++;
            }
        }
        else {
            if (freq.count(num + k)) {
                count++;
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