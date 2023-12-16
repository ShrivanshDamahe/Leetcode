class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int itr = 0;
        for (int i = 1; i < nums.size(); i++){
            if (nums[itr] != nums[i]) {
                itr++;
                int temp = nums[itr];
                nums[itr] = nums[i];
                nums[i] = temp;
            }
        }

        return itr + 1;
    }
    // Time complexity - O(n)
};