#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canShip(vector<int>& weights, int days, int capacity) {
    int requiredDays = 1;
    int load = 0;
    for (int weight : weights) {

        if (load + weight > capacity) {
            requiredDays++;
            load = weight;
        }
        else {
            load += weight;
        }
    } return requiredDays <= days;
}

int shipWithinDays(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(), weights.end());
    int high = 0;
    for (int weight : weights) {
        high += weight;
    }

    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canShip(weights, days, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    } return ans;
}

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout << shipWithinDays(weights, days);
    return 0;
}