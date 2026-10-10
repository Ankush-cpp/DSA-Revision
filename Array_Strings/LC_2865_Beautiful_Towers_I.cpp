#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    LeetCode 2865 - Beautiful Towers I

    Approach:
    - Consider every element as the peak.
    - Traverse left and maintain non-increasing heights.
    - Traverse right and maintain non-increasing heights.
    - Calculate the total sum for each possible peak.
    - Return the maximum sum.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

long long maximumSum(vector<int>& maxHeights) {
    int n = maxHeights.size();
    long long answer = 0;

    for (int i = 0; i < n; i++) {
        long long currentSum = maxHeights[i];

        // Consider index i as the peak and traverse left.
        int height = maxHeights[i];

        for (int j = i - 1; j >= 0; j--) {
            height = min(height, maxHeights[j]);
            currentSum += height;
        }

        // Reset height to the peak's height.
        height = maxHeights[i];

        // Traverse right.
        for (int j = i + 1; j < n; j++) {
            height = min(height, maxHeights[j]);
            currentSum += height;
        }

        answer = max(answer, currentSum);
    } return answer;
}

int main() {
    vector<int> maxHeights = {5, 3, 4, 1, 1};

    cout << "Maximum Sum of Beautiful Towers: " << maximumSum(maxHeights) << endl ;
    return 0;
}