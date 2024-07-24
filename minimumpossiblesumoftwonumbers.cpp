#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minSumOfTwoNumbers(vector<int>& digits) {
    sort(digits.begin(), digits.end());
    
    int num1 = 0, num2 = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (i % 2 == 0) {
            num1 = num1 * 10 + digits[i];
        } else {
            num2 = num2 * 10 + digits[i];
        }
    }
    
    int minSum = num1 + num2;
    
    return minSum;
}

int main() {
    // Example usage
    vector<int> digits = {6, 8, 4, 5, 2, 3};
    int result = minSumOfTwoNumbers(digits);
    return result;
    
    return 0;
}
