class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0], dist = abs(nums[0]);

        for (int num : nums){
            if (abs(num) < dist){
                dist = abs(num);
                ans = num;
            }
            else if (abs(num) == dist && num > ans){
                ans = num;
            }
        }

        return ans;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};