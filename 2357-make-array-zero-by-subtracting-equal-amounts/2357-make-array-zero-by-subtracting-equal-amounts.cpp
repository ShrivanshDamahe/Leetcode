class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 0)
                continue;
            
            int temp = nums[i];
            for (int j = i; j < nums.size(); j++)
                nums[j] -= temp;
            
            count++;
        }

        return count;
    }
    // Time complexity - O(n * log n)
};