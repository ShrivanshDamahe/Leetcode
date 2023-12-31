class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map <int, int> a;

        for (auto i : nums)
            a[i]++;

        for (auto i : a){
            if (k == 0){
                if (i.second > 1)
                    ans++;
            }
            else if (a.find(i.first + k) != a.end())
                ans++;
        }

        return ans;
    }
    // Time complexity - O(n * log n)
};