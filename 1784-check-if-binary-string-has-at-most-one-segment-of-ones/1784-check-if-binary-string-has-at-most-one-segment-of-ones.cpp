class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '0')
                flag = 1;
            else if (flag)
                return 0;
        }

        return 1;
    }
    // Time complexity - O(n)
};