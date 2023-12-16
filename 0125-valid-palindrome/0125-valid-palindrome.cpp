class Solution {
public:
    bool isPalindrome(string s) {
        string temp, ans;
        transform(s.begin(), s.end(), back_inserter(temp), ::tolower);
        for (char itr : temp){
            int num = static_cast<int> (itr);
            if ((num >= 97 && num <= 122) || (num >= 48 && num <= 57))
                ans += itr;
        }

        int i = 0, j = ans.size() - 1;
        while (i < j){
            if (ans[i] != ans[j])
                return 0;
            i++;
            j--;
        }
        return 1;
    }
    // Time complexity - O(n)
};