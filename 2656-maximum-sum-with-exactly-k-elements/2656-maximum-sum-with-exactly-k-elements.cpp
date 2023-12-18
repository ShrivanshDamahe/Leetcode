class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
            sum = max(sum, nums[i]);
            
        return (sum * k) + ((k - 1) * k) / 2;
    }
    // Time complexity - O(n)
};