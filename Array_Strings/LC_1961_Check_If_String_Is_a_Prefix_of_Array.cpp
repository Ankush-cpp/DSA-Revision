#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string temp = "";

        for (int i = 0; i < words.size(); i++) {
            temp += words[i];

            if (temp == s) {
                return true;
            }

            if (temp.size() > s.size()) {
                return false;
            }
        }

        return false;
    }
};

int main() {
    Solution sol;

    string s = "iloveleetcode";
    vector<string> words = {
        "i", "love", "leetcode", "apples"
    };

    cout << boolalpha << sol.isPrefixString(s, words) << endl;

    return 0;
}