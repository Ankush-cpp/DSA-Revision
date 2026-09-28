#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int largestInteger(int num) {
    string digits = to_string(num);
    string evenDigits;
    string oddDigits;
    for (char digit : digits) {
        if ((digit - '0') % 2 == 0) {
            evenDigits += digit;
        } else {
            oddDigits += digit;
        }
    }
    sort(evenDigits.rbegin(), evenDigits.rend());
    sort(oddDigits.rbegin(), oddDigits.rend());
    int evenIndex = 0;
    int oddIndex = 0;
    for (char& digit : digits) {
        if ((digit - '0') % 2 == 0) {
            digit = evenDigits[evenIndex++];
        } else {
            digit = oddDigits[oddIndex++];
        }
    } return stoi(digits);
}

int main() {
    int num = 1234;
    cout << "Largest Integer: " << largestInteger(num) << endl;
    return 0;
}