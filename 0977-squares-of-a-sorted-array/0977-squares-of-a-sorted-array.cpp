class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int st = 0, en = nums.size() - 1;
        int itr = en;
        vector<int> ans(nums.size());

        while (st <= en){
            if (abs(nums[st]) > nums[en]){
                ans[itr] = nums[st] * nums[st];
                st++;
            }
            else {
                ans[itr] = nums[en] * nums[en];
                en--;
            }

            itr--;
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(n)
};