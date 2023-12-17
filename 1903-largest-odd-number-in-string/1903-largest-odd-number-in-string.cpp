class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.length() - 1;
        while (i >= 0){
            if ((num[i] - '0') % 2 == 0){
                num.pop_back();
                i--;
            }
            else 
                break;
        }

        return num;
    }
    // Time complexity - O(n)
};