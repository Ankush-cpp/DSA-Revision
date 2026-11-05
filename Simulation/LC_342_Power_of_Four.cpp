#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }

        while (n % 4 == 0) {
            n = n / 4;
        }

        return n == 1;
    }
};

int main() {
    Solution sol;

    int n = 64;

    cout << boolalpha << sol.isPowerOfFour(n) << endl;

    return 0;
}