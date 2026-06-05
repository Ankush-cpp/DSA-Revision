#include <iostream>
#include <vector>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {

    int low = 0;
    int high = letters.size() - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (letters[mid] <= target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return letters[low % letters.size()];
}

int main() {

    vector<char> letters = {'c', 'f', 'j'};
    char target = 'a';

    cout << nextGreatestLetter(letters, target);

    return 0;
}