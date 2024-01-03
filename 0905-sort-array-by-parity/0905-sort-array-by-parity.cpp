class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if (nums.size() == 0)
            return nums;
        
        int i = 0, j = nums.size() - 1;

        while (i <= j){
            if (nums[j] % 2 == 1)
                j--;
            else if (nums[i] % 2 == 0)
                i++;
            else if (nums[j] % 2 == 0){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        return nums;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};