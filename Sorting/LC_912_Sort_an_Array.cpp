#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int st, int mid, int end) {

    int n1 = mid - st + 1;
    int n2 = end - mid;

    vector<int> left(n1), right(n2);

    for (int i = 0; i < n1; i++)
        left[i] = nums[st + i];

    for (int i = 0; i < n2; i++)
        right[i] = nums[mid + 1 + i];

    int i = 0, j = 0, k = st;
    
    while (i < n1 && j < n2) {
        if (left[i] <= right[j])
            nums[k++] = left[i++];
        else
            nums[k++] = right[j++];
    }

    while (i < n1)
        nums[k++] = left[i++];

    while (j < n2)
        nums[k++] = right[j++];
}

void mergeSort(vector<int>& nums, int st, int end) {

    if (st >= end)
        return;
    int mid = st + (end - st) / 2;
    mergeSort(nums, st, mid);
    mergeSort(nums, mid + 1, end);
    merge(nums, st, mid, end);
}

vector<int> sortArray(vector<int>& nums) {
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
}

int main() {
    vector<int> nums = {5, 2, 3, 1};
    sortArray(nums);
    for (int x : nums)
        cout << x << " ";
    return 0;
}