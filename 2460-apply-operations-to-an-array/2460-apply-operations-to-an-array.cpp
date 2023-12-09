class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++){
            if (nums[i] == nums[i + 1]){
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        int i = 0, j = 1;
        for (int k = 0; k < nums.size() - 1; k++){
            if (nums[i] != 0){
                i++;
                j++;
                continue;
            }

            if (nums[j] == 0){
                j++;
            }
            else if (nums[i] == 0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }

        return nums;
    }
    // Time complexity - O(n)
};