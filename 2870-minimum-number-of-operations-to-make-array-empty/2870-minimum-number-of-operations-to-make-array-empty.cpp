class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> freq;

        for (int i : nums)
            freq[i]++;

        for (auto &x : freq){
            if (x.second == 1)
                return -1;
            else if (x.second % 3 == 0)
                ans += x.second / 3;
            else {
                while (x.second){
                    if (x.second == 4 || x.second == 2){
                        x.second -= 2;
                        ans++;
                    }
                    else {
                        x.second -= 3;
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};