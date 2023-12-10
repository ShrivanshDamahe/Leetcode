class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        long long count = 1, itr = 0;

        while (nums[itr] == 0){
            itr++;
            if (itr == nums.size())
                return 0;
        }

        int temp = 1;
        for (itr; itr < nums.size(); itr++){
            if (nums[itr] == 0)
                temp++;
            else {
                count = (count * temp) % 1000000007;
                temp = 1;
            }
        }

        return count;
    }
    // Time complexity - O(n)
};