class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a = "", b = "";

        for (int i = 0; i < max(s.length(), t.length()); i++){
            if (i < s.length()){
                if (isalpha(s[i]))
                    a += s[i];
                else {
                    if (!a.empty())
                        a.pop_back();
                }
            }

            if (i < t.length()){
                if (isalpha(t[i]))
                    b += t[i];
                else {
                    if (!b.empty())
                        b.pop_back();
                }
            }
        }

        return (a == b);
    }
    // Time complexity - O(max(s.length(), t.length()))
};