#include <iostream>
#include <vector>
using namespace std;

/*
    LeetCode 2708 - Maximum Strength of a Group

    Approach:
    - Multiply all positive numbers.
    - Pair negative numbers so their product becomes positive.
    - If there is an odd number of negative values,
      exclude the negative number closest to zero.
    - Handle the cases involving zero carefully.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

long long maxStrength(vector<int>& nums) {
    long long positiveProduct = 1;
    long long negativeProduct = 1;

    int negativeCount = 0;
    int maxNegative = -10;

    bool hasPositive = false;
    bool hasZero = false;

    for (int num : nums) {
        if (num > 0) {
            positiveProduct *= num;
            hasPositive = true;
        }
        else if (num < 0) {
            negativeProduct *= num;
            negativeCount++;
            maxNegative = max(maxNegative, num);
        }
        else {
            hasZero = true;
        }
    }

    // Only zeros are present.
    if (negativeCount == 0 && !hasPositive) {
        return 0;
    }

    // No negative number needs to be removed.
    if (negativeCount % 2 == 0) {
        return positiveProduct * negativeProduct;
    }

    // Odd number of negatives.
    // Remove the negative number closest to zero.
    if (negativeCount >= 3) {
        return (negativeProduct / maxNegative) * positiveProduct;
    }

    // Exactly one negative number.
    if (hasPositive) {
        return positiveProduct;
    }

    // Only one negative and zeros.
    return hasZero ? 0 : maxNegative;
}

int main() {
    /*
        Example:
        nums = [3, -1, -5, 2, 5, -9]

        Maximum strength = 1350
    */

    vector<int> nums = {3, -1, -5, 2, 5, -9};

    cout << "Maximum Strength: "
         << maxStrength(nums) << endl;

    return 0;
}