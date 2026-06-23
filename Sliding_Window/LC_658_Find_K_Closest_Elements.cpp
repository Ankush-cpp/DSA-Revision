#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int left = 0;
    int right = arr.size() - 1;
    while (right - left + 1 > k) {
        if (abs(arr[left] - x) > abs(arr[right] - x)) {
            left++;
        }
        else {
            right--;
        }
    } return vector<int>(arr.begin() + left, arr.begin() + right + 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;
    vector<int> ans = findClosestElements(arr, k, x);
    for (int num : ans) {
        cout << num << " ";
    } 
    return 0;
}