#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(string& s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    } return true;
}

void solve(string& s, int index, vector<string>& current, vector<vector<string>>& ans) {

    if (index == s.size()) {
        ans.push_back(current);
        return;
    }

    for (int i = index; i < s.size(); i++) {
        if (isPalindrome(s, index, i)) {
            current.push_back(s.substr(index, i - index + 1));
            solve(s, i + 1, current, ans);
            current.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> current;
    solve(s, 0, current, ans);
    return ans;
}

int main() {

    string s = "aab";
    vector<vector<string>> ans = partition(s);
    for (auto partition : ans) {
        cout << "[ ";
        for (string str : partition) {
            cout << str << " ";
        }
        cout << "]\n";
    } return 0;
}