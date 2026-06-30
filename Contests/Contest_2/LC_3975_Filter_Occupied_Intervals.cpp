#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& intervals,
     int freeStart, int freeEnd) {

    // Merge overlapping intervals
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    vector<int> current = intervals[0];
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] <= current[1] + 1) {
            current[1] = max(current[1], intervals[i][1]);
        }
        else {
            merged.push_back(current);
            current = intervals[i];
        }
    }
    merged.push_back(current);
    // Remove free interval
    vector<vector<int>> ans;
    for (auto interval : merged) {
        if (interval[1] < freeStart || interval[0] > freeEnd) {
            ans.push_back(interval);
        }
        else if (interval[0] < freeStart && interval[1] <= freeEnd) {
            ans.push_back({interval[0], freeStart - 1});
        }
        else if (interval[0] >= freeStart && interval[1] > freeEnd) {
            ans.push_back({freeEnd + 1, interval[1]});
        }
        else if (interval[0] >= freeStart &&
                 interval[1] <= freeEnd) {
            continue;
        }
        else {
            ans.push_back({interval[0], freeStart - 1});
            ans.push_back({freeEnd + 1, interval[1]});
        }
    } return ans;
}

int main() {
    vector<vector<int>> intervals = {
        {1,3},
        {5,7},
        {6,9}
    };
    int freeStart = 4;
    int freeEnd = 6;
    vector<vector<int>> ans =
        filterOccupiedIntervals(intervals, freeStart, freeEnd);
    for (auto interval : ans) {
        cout << "[" << interval[0] << ", "
             << interval[1] << "] ";
    } return 0;
}