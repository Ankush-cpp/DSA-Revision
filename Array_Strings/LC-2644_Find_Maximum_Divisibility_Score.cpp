#include <vector>
using namespace std;

class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxCount = -1;
        int answer = divisors[0];
        for (int divisor : divisors) {
            int count = 0;
            for (int num : nums) {
                if (num % divisor == 0) {
                    count++;
                }
            }
            if (count > maxCount) {
                maxCount = count;
                answer = divisor;
            }
            else if (count == maxCount && divisor < answer) {
                answer = divisor;
            }
        } return answer;
    }
};