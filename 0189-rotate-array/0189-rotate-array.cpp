class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> result(nums.size());

        for (int i = 0; i < nums.size(); i++){
            int temp = (i + k) % nums.size();
            result[temp] = nums[i];
        }

        nums = result;
    }
    // Time complexity - O(n)
};