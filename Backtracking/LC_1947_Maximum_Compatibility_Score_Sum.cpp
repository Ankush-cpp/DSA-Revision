
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int ans = 0;

    void solve(vector<vector<int>>& students,
               vector<vector<int>>& mentors,
               vector<bool>& visited,
               int idx,
               int currScore) {
        int n = students.size();

        // Base case: all students assigned
        if (idx == n) {
            ans = max(ans, currScore);
            return;
        }

        // Try every available mentor
        for (int j = 0; j < n; j++) {
            if (visited[j]) continue;

            // Calculate compatibility score
            int count = 0;

            for (int k = 0; k < students[idx].size(); k++) {
                if (students[idx][k] == mentors[j][k]) {
                    count++;
                }
            }

            // Choose mentor
            visited[j] = true;

            // Explore next student
            solve(students, mentors, visited,
                  idx + 1, currScore + count);

            // Backtrack
            visited[j] = false;
        }
    }

    int maxCompatibilitySum(vector<vector<int>>& students,
                            vector<vector<int>>& mentors) {
        int n = students.size();
        vector<bool> visited(n, false);
        ans = 0;

        solve(students, mentors, visited, 0, 0);

        return ans;
    }
};

int main() {
    vector<vector<int>> students = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 1}
    };

    vector<vector<int>> mentors = {
        {1, 0, 0},
        {0, 0, 1},
        {1, 1, 0}
    };

    Solution sol;
    cout << "Maximum Compatibility Score Sum: "
         << sol.maxCompatibilitySum(students, mentors)
         << endl;

    return 0;
}
