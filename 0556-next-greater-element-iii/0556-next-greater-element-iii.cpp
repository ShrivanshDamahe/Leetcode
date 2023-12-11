class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> digits;
        int copy = n;

        while (copy != 0){
            digits.push_back(copy % 10);
            copy /= 10;
        }

        reverse(digits.begin(), digits.end());
        next_permutation(digits.begin(), digits.end());

        int result = 0;
        for (int i = 0; i < digits.size(); i++){
            if (result > (INT_MAX - digits[i]) / 10)
                return -1;
                
            result = (result * 10) + digits[i];
        }

        if (result <= n)
            return -1;
        return result;
    }
};