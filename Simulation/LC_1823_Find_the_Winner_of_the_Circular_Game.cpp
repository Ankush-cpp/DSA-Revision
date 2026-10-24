
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<bool> marked(n, false);
        int remaining = n;
        int countk = 0;
        int i = 0;

        while (remaining > 1) {
            if (marked[i]) {
                i = (i + 1) % n;
                continue;
            }

            countk++;

            if (countk == k) {
                marked[i] = true;
                remaining--;
                countk = 0;
            }

            i = (i + 1) % n;
        }

        for (int j = 0; j < n; j++) {
            if (!marked[j]) {
                return j + 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;

    int n = 5;
    int k = 2;

    cout << "Winner: " << sol.findTheWinner(n, k) << endl;

    return 0;
}
