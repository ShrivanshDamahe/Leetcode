class Solution {
public:
    int minLength(string s) {
        stack<char> pile;

        for (int i = 0; i < s.length(); i++){
            if (pile.empty())
                pile.push(s[i]);
            else if (s[i] == 'B' && pile.top() == 'A')
                pile.pop();
            else if(s[i] == 'D' && pile.top() == 'C')
                pile.pop();
            else 
                pile.push(s[i]);
        }

        return pile.size();
    }
    // Time complexity - O(n)
};