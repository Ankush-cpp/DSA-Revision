#include <iostream>
#include <string>
using namespace std;

/*
    LeetCode 389 - Find the Difference

    Approach:
    Find the character that appears once more in string t
    compared to string s.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

char findTheDifference(string s, string t) {
    char answer = 0;

    for (char ch : s) {
        answer ^= ch;
    }

    for (char ch : t) {
        answer ^= ch;
    }

    return answer;
}

int main() {
    string s = "abcd";
    string t = "abcde";

    cout << "The difference is: "
         << findTheDifference(s, t) << endl;

    return 0;
}