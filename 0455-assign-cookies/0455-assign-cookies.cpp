class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int x = 0, y = 0;
        while (x < g.size() && y < s.size()){
            if (g[x] <= s[y]){
                ans++;
                x++;
                y++;
            }
            else 
                y++;
        }

        return ans;
    }
    // Time complexity - O(n * log n)
};