class Solution {
public:
    string reverseOnlyLetters(string s) {
        int itr1 = 0, itr2 = s.length() - 1;

        while (itr1 <= itr2){
            if (!((s[itr1] - 'a' < 26 && s[itr1] - 'a' >= 0) || (s[itr1] - 'A' < 26 && s[itr1] - 'A' >= 0))){
                itr1++;
                continue;
            }

            if (!((s[itr2] - 'a' < 26 && s[itr2] - 'a' >= 0) || (s[itr2] - 'A' < 26 && s[itr2] - 'A' >= 0))){
                itr2--;
                continue;
            }

            int temp = s[itr1];
            s[itr1] = s[itr2];
            s[itr2] = temp;
            itr1++;
            itr2--;
        }

        return s;
    }
    // Time copmlexity - O(n)
};