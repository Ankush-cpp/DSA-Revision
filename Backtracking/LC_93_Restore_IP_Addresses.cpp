#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isValid(string &part) {

    if (part.size() > 1 && part[0] == '0')
        return false;
    int num = stoi(part);
    return num >= 0 && num <= 255;
}

void solve(string &s, int index, int parts, string current, vector<string> &ans) {

    if (index == s.size() && parts == 4) {
        current.pop_back(); // remove last '.'
        ans.push_back(current);
        return;
    }

    if (parts == 4)
        return;

    for (int len = 1; len <= 3 && index + len <= s.size(); len++) {
        string part = s.substr(index, len);
        if (isValid(part)) {
            solve(s, index + len, parts + 1, current + part + ".", ans);
        }
    }
}

vector<string> restoreIpAddresses(string s) {
    vector<string> ans;
    solve(s, 0, 0, "", ans);
    return ans;
}

int main() {

    string s = "25525511135";
    vector<string> ans = restoreIpAddresses(s);
    for (string ip : ans)
        cout << ip << endl;
    return 0;
}