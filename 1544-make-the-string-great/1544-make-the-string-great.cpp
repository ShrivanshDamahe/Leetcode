class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;

        for (char c : s)
            (!stk.empty() && (abs(stk.top() - c) == 32)) ? stk.pop() : stk.push(c);

        s = "";
        while (!stk.empty()){
            s = stk.top() + s;
            stk.pop();
        }

        return s;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};