class Solution {
public:
    int minimumMoves(string s) {
        int a = 0, b = 2;
        int count = 0;

        for (int i = 0; i < s.length() - 2; i++){
            if (s[a] == 'X'){
                s[a] = 'O';
                s[a + 1] = 'O';
                s[b] = 'O';
                count++;
            }
            else if (i == s.length() - 3 && (s[a] == 'X' || s[a + 1] == 'X' || s[b] == 'X'))
                count++;
                
            a++;
            b++;
        }

        return count;
    }
    // Time complexity - O(n)
};