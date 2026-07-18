#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int n, vector<string>& ans, string& current, int open, int close) {

    if (open == n && close == n) {
        ans.push_back(current);
        return;
    }
    if (open < n) {
        current.push_back('(');
        solve(n, ans, current, open + 1, close);
        current.pop_back();
    }
    if (close < open) {
        current.push_back(')');
        solve(n, ans, current, open, close + 1);
        current.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string current;
    solve(n, ans, current, 0, 0);
    return ans;
}

int main() {
    int n = 3;
    vector<string> ans = generateParenthesis(n);
    for (string s : ans) {
        cout << s << endl;
    }
    return 0;
}