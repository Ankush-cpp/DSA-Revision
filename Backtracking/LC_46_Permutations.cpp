#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums,
           vector<int>& current,
           vector<bool>& visited,
           vector<vector<int>>& ans) {
    if (current.size() == nums.size()) {
        ans.push_back(current);
        return;
    }
    for (int i = 0; i < nums.size(); i++) {
        if (visited[i]) {
            continue;
        }
        visited[i] = true;
        current.push_back(nums[i]);
        solve(nums, current, visited, ans);
        current.pop_back();
        visited[i] = false;
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> current;
    vector<bool> visited(nums.size(), false);
    solve(nums, current, visited, ans);
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = permute(nums);
    for (auto permutation : ans) {
        cout << "[ ";
        for (int x : permutation) {
            cout << x << " ";
        }
        cout << "]\n";
    } return 0;
}