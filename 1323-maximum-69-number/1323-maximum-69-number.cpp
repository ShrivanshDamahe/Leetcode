class Solution {
public:
    int maximum69Number (int num) {
        vector<int> digits;
        for (int i = 0; i < 4; i++){
            digits.push_back(num % 10);
            num /= 10;
        }

        for (int i = 3; i >= 0; i--){
            if (digits[i] == 6){
                digits[i] = 9;
                break;
            }
        }

        for (int i = 3; i >= 0; i--)
            num = (num * 10) + digits[i];
        return num;
    }
    // Time complexity - O(1)
};