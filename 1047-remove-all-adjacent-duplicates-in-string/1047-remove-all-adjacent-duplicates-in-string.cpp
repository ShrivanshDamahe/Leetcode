class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> pile;

        for (int i = 0; i < s.length(); i++){
            if (pile.empty())
                pile.push(s[i]);
            else if (pile.top() == s[i])
                pile.pop();
            else 
                pile.push(s[i]);
        }

        string ans = "";
        while (!pile.empty()){
            ans = pile.top() + ans;
            pile.pop();
        }

        return ans;
    }
    // Time complexity - O(n)
};