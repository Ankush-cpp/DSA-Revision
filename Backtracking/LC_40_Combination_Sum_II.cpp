#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int index, vector<int>& candidates, int target, vector<int>& current, vector<vector<int>>& ans) {
    if (target == 0) {
        ans.push_back(current);
        return;
    }
    for (int i = index; i < candidates.size(); i++) {
        // Skip duplicates
        if (i > index && candidates[i] == candidates[i - 1]) {
            continue;
        }
        if (candidates[i] > target) {
            break;
        }
        current.push_back(candidates[i]);
        solve(i + 1, candidates, target - candidates[i], current, ans);
        current.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> current;
    solve(0, candidates, target, current, ans);
    return ans;
}

int main() {
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> ans =
        combinationSum2(candidates, target);
    for (auto combination : ans) {
        cout << "[ ";
        for (int x : combination) {
            cout << x << " ";
        }
        cout << "]\n";
    } return 0;
}