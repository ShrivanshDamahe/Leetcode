class Solution {
public:
    int splitNum(int num) {
        vector<int> digit;

        while (num != 0){
            digit.push_back(num % 10);
            num /= 10;
        }
        sort(digit.begin(), digit.end());

        int n1 = 0, n2 = 0;
        for (int i = 0; i < digit.size(); i++){
            if (i % 2 == 0){
                n1 = n1 * 10 + digit[i];
            }
            else {
                n2 = n2 * 10 + digit[i];
            }
        }

        return n1 + n2;
    }
    // Time complexity - O(n * log n)
};