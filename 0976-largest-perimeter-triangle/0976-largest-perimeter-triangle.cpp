class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int i = 0;

        sort(nums.begin(), nums.end(), greater<int>());

        while (nums[i + 1] + nums[i + 2] <= nums[i] && i < nums.size() - 3)
            i++;

        if (nums[i + 1] + nums[i + 2] > nums[i])
            return nums[i] + nums[i + 1] + nums[i + 2];
        return 0;
    }
    // Time complexity - O(n * log n)
    // Space complexity - O(1)
};