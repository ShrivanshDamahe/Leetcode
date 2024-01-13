class Solution {
public:
    int minSteps(string s, string t) {
        int temp = 0, i = 0, j = 0;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        while (i < s.length() && j < t.length()){
            if (s[i] == t[j]){
                i++;
                j++;
            }
            else if (s[i] < t[j]){
                i++;
                temp++;
            }
            else 
                j++;
        }
        
        return temp + s.length() - i;
    }
    // Time complexity - O(n * log n)
    // Space complexity - O(1)
};