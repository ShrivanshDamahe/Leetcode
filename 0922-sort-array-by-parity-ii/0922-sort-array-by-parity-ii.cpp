class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1)
            return nums;
        
        int i = 0, j = 1;

        while (i < nums.size() && j < nums.size()){
            if (nums[i] % 2 == 0)
                i += 2;
            else if (nums[j] % 2 == 1)
                j += 2;
            else {
                swap (nums[i], nums[j]);
                i += 2;
                j += 2;
            }
        }

        return nums;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};