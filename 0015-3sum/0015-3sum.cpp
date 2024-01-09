class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++){
            if (i >= 1 && nums[i] == nums[i - 1])
                continue;
            
            int left = i + 1, right = nums.size() - 1;

            while (left < right){
                if (nums[left] + nums[right] == -nums[i]){
                    ans.push_back({nums[i], nums[left], nums[right]});

                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    
                    left++;
                    right--;
                }
                else if (-nums[i] > nums[left] + nums[right])
                    left++;
                else 
                    right--;
            }
        }

        return ans;
    }
    // Time complexity - O(n^2)
    // Space complexity - O(n^3)
};