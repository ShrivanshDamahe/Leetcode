class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        if (nums[start] == target)
            return 0;

        int i;
        for (i = 0; true; ++i){
            if ((start - i) >= 0 && nums[start - i] == target)
                break;

            if ((start + i) < nums.size() && nums[start + i] == target)
                break;
        }

        return i;
    }
    // Time complexity - O(n)
    // Space complexity - O(1)
};