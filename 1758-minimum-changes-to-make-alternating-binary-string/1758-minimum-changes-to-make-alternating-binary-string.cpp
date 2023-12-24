class Solution {
public:
    int minOperations(string s) {
        int a = 0, b = 0;

        for (int i = 0; i < s.length(); i++){
            if ((s[i] == '0' && i % 2 == 0) || (s[i] == '1' && i % 2 == 1))
                a++;
            else 
                b++;
        }

        return s.length() - max(a, b);
    }
    // Time complexity - O(n)
};