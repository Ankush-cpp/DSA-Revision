#include <iostream>
#include <string>
using namespace std;

int maxDistance(string moves) {
    int U = 0, D = 0, L = 0, R = 0, wild = 0;
    for (char c : moves) {
        if (c == 'U') U++;
        else if (c == 'D') D++;
        else if (c == 'L') L++;
        else if (c == 'R') R++;
        else wild++;
    } return abs(U - D) + abs(L - R) + wild;
}

int main() {
    string moves = "L_D_";
    cout << maxDistance(moves);
    return 0;
}