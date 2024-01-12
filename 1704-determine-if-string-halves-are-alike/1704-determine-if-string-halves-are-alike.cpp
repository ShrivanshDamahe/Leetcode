class Solution {
public:
    int check(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return 1;
        else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return 1;
        return 0;
    }

    bool halvesAreAlike(string s) {
        int i, a = 0, b = 0;

        for (i = 0; i < s.length() / 2; i++){
            a += check(s[i]);
        }

        for (i = s.length() / 2; i < s.length(); i++){
            b += check(s[i]);
        }
        
        return (a == b);
    }
    // Time complexity == O(n)
    // Space complexity == O(1)
};