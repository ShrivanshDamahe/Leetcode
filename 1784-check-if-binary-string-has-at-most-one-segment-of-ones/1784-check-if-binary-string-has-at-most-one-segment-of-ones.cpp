class Solution {
public:
    bool checkOnesSegment(string s) {
        for (int i = s.length() - 1; i >= 0; i--){
            if (s[i] == '0')
                s.pop_back();
        }

        for (int i = 0; i < s.length(); i++){
            if (s[i] == '0')
                return 0;
        }
        return 1;
    }
    // Time complexity - O(n)
};