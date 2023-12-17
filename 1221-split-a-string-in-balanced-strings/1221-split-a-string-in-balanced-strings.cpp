class Solution {
public:
    int balancedStringSplit(string s) {
        int left = 0, right = 0, count = 0;
        
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'L')
                left++;
            else if (s[i] == 'R')
                right++;

            if (left == right)
                count++;
        }

        return count;
    }
    // Time complexity = O(n)
};